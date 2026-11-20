"""Black-box regression tests for the standalone sorting and searching examples."""
import random
import unittest
from pathlib import Path
from subprocess import run

BUILD = Path(__file__).resolve().parents[1] / 'build'
# Result marker and maximum number of elements accepted by each example.
SORTS = {
    'BubbleSort': ('Sorted list in ascending order:', 100),
    'Insertionsort': ('Sorted list in ascending order:', 1000),
    'SelectionSort': ('Enter the elements ', 1000),
    'Mergesort': ('Sorted array is :', 30),
    'Quicksort': ('Array after sorting:', 50),
    'heap sort': ('Array after sorting:', 29),  # slot zero holds the size
}


def execute(name, *tokens):
    return run([BUILD / name], input=' '.join(map(str, tokens)) + '\n',
               text=True, capture_output=True, timeout=5)


class ArrayExamples(unittest.TestCase):
    def output(self, name, *tokens):
        result = execute(name, *tokens)
        self.assertEqual(result.returncode, 0, result.stderr)
        return result.stdout.rstrip('\n')

    def rejected(self, name, *tokens):
        result = execute(name, *tokens)
        self.assertGreater(result.returncode, 0, 'expected a clean error, not success or a signal')

    def test_comparison_sorts(self):
        for name, (marker, capacity) in SORTS.items():
            rng = random.Random(123)
            for values in ([], [42], [2, 2, 2], [4, 3, 2, 1],
                           list(range(18)), [rng.randint(-5, 5) for _ in range(capacity)]):
                with self.subTest(program=name, size=len(values)):
                    output = self.output(name, len(values), *values)
                    _, found, answer = output.partition(marker)
                    self.assertTrue(found, output)
                    self.assertEqual(list(map(int, answer.split())), sorted(values))
            with self.subTest(program=name, invalid_size=True):
                self.rejected(name, -1)
                self.rejected(name, capacity + 1, *([0] * (capacity + 1)))

    def test_counting_sort(self):
        values = [10000, 0, 2, 0, 10000, 1]
        output = self.output('counting_sort', len(values), max(values), *values)
        self.assertEqual(list(map(int, output.split('After sorting\n')[1].split())), sorted(values))
        self.rejected('counting_sort', 2, 3, 3, 4)

    def test_linear_search(self):
        for target, answer in [(4, 'FOUND AT INDEX 0'), (-1, 'FOUND AT INDEX 1'), (2, 'ELEMENT NOT FOUND')]:
            with self.subTest(target=target):
                self.assertEqual(self.output('linearsearch', 4, 4, -1, 4, 9, target).splitlines()[-1], answer)

    def test_maxima(self):
        self.assertTrue(self.output('Largest', 3, -8, -2, -5).endswith('The largest number is -2'))
        self.rejected('Largest', 0)
        for name in ("Position of First'n'Second maximum element in Array without sorting",
                     "Position_of_First'n'Second_max_elements_without_sorting_array"):
            for values in ([12, 7, 12, -3], [-8, -2, -5], [4, 4], [1, 2, 3]):
                with self.subTest(program=name, values=values):
                    distinct = sorted(set(values), reverse=True)
                    first = distinct[0]
                    second_line = 'No distinct second maximum'
                    if len(distinct) > 1:
                        second = distinct[1]
                        second_line = f'Second max element:{second}   at position:{values.index(second) + 1}'
                    self.assertEqual(self.output(name, len(values), *values).splitlines()[-2:], [
                        f'First max element :{first}   at position:{values.index(first) + 1}', second_line])

    def test_ranks(self):
        values = [8, -3, 8, 6, 1, 1]
        name = 'kth smallest no in an array'
        for rank, expected in enumerate(sorted(values), start=1):
            with self.subTest(rank=rank):
                self.assertEqual(self.output(name, 1, len(values), *values, rank), str(expected))
        self.rejected(name, 1, len(values), *values, 0)
        self.rejected(name, 1, len(values), *values, len(values) + 1)
        reduced = self.output('Convert an array to reduced form', 1, len(values), *values)
        ordered = sorted(set(values))
        self.assertEqual(list(map(int, reduced.split())), [ordered.index(v) for v in values])


if __name__ == '__main__':
    unittest.main()

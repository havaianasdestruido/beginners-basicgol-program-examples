"""Exercise representative standalone examples, including formerly extensionless files."""
from pathlib import Path
from subprocess import run

BUILD = Path(__file__).resolve().parents[1] / 'build'
# Compare output suffixes so tests check the answer, not the prompt wording.
CASES = [
    ('HelloWorld', '', 'Hello, World!'),
    ('Addition', '2 3', 'The Sum is 5'),
    ('RecursiveFactorial', '0', '0! is equal to 1'),
    ('Factorial', '20', '2432902008176640000'),
    ('DecimalToBaseN', '255 16', 'FF'),
    ('Binary to decimal', '1101', '13'),
    ('BinarySearch', '', '0\n1'),
    ('Binary-Tree-Traversals', '', '1 2 3 \n2 1 3 \n1 3 2'),
    ('BubbleSort', '4 6 -1 6 3', '-1\n3\n6\n6'),
    ('Diagonal-Difference', '3 11 2 4 4 5 6 10 8 -12', '15'),
    ('Convert an array to reduced form', '1 5 30 10 10 2 0', '3 2 2 1 0'),
    ('kth smallest no in an array', '1 5 7 3 1 2 9 3', '3'),
    ('Anagram-Program-in-C', 'stone\ntones\n', 'stone and tones are Anagram.'),
    ('StringReverse', 'hello', 'The reverse string is olleh'),
    ('SumUsingThreads', '', '55\nMain Ended'),
    ('counting_sort', '5 4 2 1 2 4 0', '0 1 2 2 4'),
]

for name, data, expected in CASES:
    result = run([BUILD / name], input=data, text=True, capture_output=True, timeout=5, check=True)
    if not result.stdout.rstrip().endswith(expected):
        raise SystemExit(f'{name}: expected suffix {expected!r}; got {result.stdout!r}')
print(f'Passed {len(CASES)} smoke cases')

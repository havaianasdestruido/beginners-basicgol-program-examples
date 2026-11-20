# Beginner BASICGOL program examples

Each example is a standalone program written in [BASICGOL](https://github.com/havaianasdestruido/BASICGOL)'s **M0 (macro) profile**. The `.c` suffix is intentional: `<basicgol.h>` supplies the language, and a C11 compiler produces a native executable. No interpreter or transpiler is needed.

## Build and run

On Linux, install a C11 compiler, Git and Make. From this repository's root, clone the official library alongside it. The revision below is the one used to check this collection.

```sh
git clone https://github.com/havaianasdestruido/BASICGOL ../BASICGOL
git -C ../BASICGOL checkout ffcf62bc3b222bed213a8e330773d3307683595e
make
./build/HelloWorld
printf '2 3\n' | ./build/Addition
```

`make check` runs the smoke tests and an array regression suite (requires Python 3). The latter compares six sorting examples with Python’s `sorted`, checks size limits, and exercises search and ranking with duplicate and negative values. If the library lives elsewhere, use `make BASICGOL_DIR=/path/to/BASICGOL check`. Binaries are written to `build/`; quote names containing spaces.

To build just one example:

```sh
make -C ../BASICGOL biblioteca
cc -std=c11 -I../BASICGOL/include 'Binary to decimal.c' \
   ../BASICGOL/build/libbasicgol.a -lm -o binary-to-decimal
printf '1101\n' | ./binary-to-decimal
```

## Where to start

| Learn | Example |
| --- | --- |
| Entry point and output | [Hello world](HelloWorld.c) |
| Read and calculate | [Addition](Addition.c) |
| Conditions | [Leap years](NestedIfLeapYear.c) |
| Counted loops | [Multiplication table](SimpleMultiplicationTable.c) |
| Functions and recursion | [Recursive factorial](RecursiveFactorial.c) |
| Arrays | [Bubble sort](BubbleSort.c) |
| Text and buffer boundaries | [String reversal](StringReverse.c) · [Buffer guide](Buffer%20Overflow%20for%20Kids.md) |
| Records and pointers | [Linked-list search](LinkedListSearch.c) |

Most examples use only BASICGOL and the standard library. The system examples intentionally call native APIs: the thread demos need POSIX threads (`-pthread`), and the process/environment demos target Unix. Some examples are interactive; `BackgroundThreadSorter` accepts pairs of rectangle dimensions until end of input.

## All examples

- [Adding_Fractions](Adding_Fractions.c)
- [Addition](Addition.c)
- [Address of 1-D array](Address%20of%201-D%20array.c)
- [AllTempScalesConv](AllTempScalesConv.c)
- [alphabetTriangle](alphabetTriangle.c)
- [Anagram-Program-in-C](Anagram-Program-in-C.c)
- [Area_of_Circle](Area_of_Circle.c)
- [Area_of_Square](Area_of_Square.c)
- [Area_of_Triangle](Area_of_Triangle.c)
- [AreaAndCircumference](AreaAndCircumference.c)
- [ArmstrongNumber](ArmstrongNumber.c)
- [ARRAY](ARRAY.c)
- [Automorphic_number](Automorphic_number.c)
- [BackgroundThreadSorter](BackgroundThreadSorter.c)
- [BasicArithmatic](BasicArithmatic.c)
- [BasicGame](BasicGame.c)
- [Binary to decimal](Binary%20to%20decimal.c)
- [Binary-Tree-Traversals](Binary-Tree-Traversals.c)
- [binary_to_octal](binary_to_octal.c)
- [BinarySearch](BinarySearch.c)
- [BitwiseAndOperator](BitwiseAndOperator.c)
- [BitwiseComplementOperator](BitwiseComplementOperator.c)
- [BitwiseLeftshiftOperator](BitwiseLeftshiftOperator.c)
- [BitwiseOddOrEven](BitwiseOddOrEven.c)
- [BubbleSort](BubbleSort.c)
- [CalculateSimpleInterest](CalculateSimpleInterest.c)
- [CalcUsingSwitchCase](CalcUsingSwitchCase.c)
- [camelcase](camelcase.c)
- [CelciusToKelvinConv](CelciusToKelvinConv.c)
- [Changingbase](Changingbase.c)
- [check functon is even or odd in c programming](check%20functon%20is%20even%20or%20odd%20in%20c%20programming.c)
- [CheckCharacterType](CheckCharacterType.c)
- [closestpowerof2](closestpowerof2.c)
- [combine_calculator](combine_calculator.c)
- [CommonElementsInTwoArrays](CommonElementsInTwoArrays.c)
- [Convert an array to reduced form](Convert%20an%20array%20to%20reduced%20form.c)
- [counting_sort](counting_sort.c)
- [CourseRecords](CourseRecords.c)
- [DailyWageCalc](DailyWageCalc.c)
- [DayNameUsingSwitchCase](DayNameUsingSwitchCase.c)
- [Decimal to Binary](Decimal%20to%20Binary.c)
- [DecimalToBaseN](DecimalToBaseN.c)
- [DecimalToBinary](DecimalToBinary.c)
- [DecimalToHexadecimalViceVersa](DecimalToHexadecimalViceVersa.c)
- [DecrementOperator](DecrementOperator.c)
- [Diagonal-Difference](Diagonal-Difference.c)
- [DiceRoll](DiceRoll.c)
- [DigitalRoot](DigitalRoot.c)
- [DisplayLinuxEnvirmentVariables](DisplayLinuxEnvirmentVariables.c)
- [Division](Division.c)
- [dynamicMemoryAllocation](dynamicMemoryAllocation.c)
- [DynamicTwoDArrayUsingArrayOfPointer](DynamicTwoDArrayUsingArrayOfPointer.c)
- [DynamicTwoDArrayUsingOnePointer](DynamicTwoDArrayUsingOnePointer.c)
- [EmployeeGrade](EmployeeGrade.c)
- [EncryptDecryptXOR](EncryptDecryptXOR.c)
- [endian](endian.c)
- [Even Fibonacci numbers](Even%20Fibonacci%20numbers.c)
- [Factorial](Factorial.c)
- [FahrenheitToCelciusConv](FahrenheitToCelciusConv.c)
- [fastModuloExponentiation](fastModuloExponentiation.c)
- [FibonacciGeneration](FibonacciGeneration.c)
- [FIND_EVEN_ AND_DIVISIBLE_BY_3](FIND_EVEN_%20AND_DIVISIBLE_BY_3.c)
- [FindAsciiValue](FindAsciiValue.c)
- [finding the first missing natural number](finding%20the%20first%20missing%20natural%20number.c)
- [FindRemainder](FindRemainder.c)
- [gcd](gcd.c)
- [getPIDs](getPIDs.c)
- [GotoStatementEvenOrOdd](GotoStatementEvenOrOdd.c)
- [Gross_Salary](Gross_Salary.c)
- [HaystackAndNeedle_SubString](HaystackAndNeedle_SubString.c)
- [heap sort](heap%20sort.c)
- [HelloWorld](HelloWorld.c)
- [increment_number](increment_number.c)
- [IncrementOperator](IncrementOperator.c)
- [Insertionsort](Insertionsort.c)
- [ip_address](ip_address.c)
- [isInputLeapYear](isInputLeapYear.c)
- [kth smallest no in an array](kth%20smallest%20no%20in%20an%20array.c)
- [lambda_in_c](lambda_in_c.c)
- [large_factorial](large_factorial.c)
- [Largest](Largest.c)
- [last-digit-fibonacci](last-digit-fibonacci.c)
- [lcm](lcm.c)
- [LeapYearTernaryOperator](LeapYearTernaryOperator.c)
- [LenghtOfString(without using strlen)](LenghtOfString%28without%20using%20strlen%29.c)
- [Lexicographic_Sorting](Lexicographic_Sorting.c)
- [LinearCongruentialGenerator](LinearCongruentialGenerator.c)
- [linearsearch](linearsearch.c)
- [Linked List Creation](Linked%20List%20Creation.c)
- [Linked_List](Linked_List.c)
- [LinkedLists](LinkedLists.c)
- [LinkedListSearch](LinkedListSearch.c)
- [LinkedNodePointers](LinkedNodePointers.c)
- [Log_Conversion](Log_Conversion.c)
- [LowercaseToUppercase](LowercaseToUppercase.c)
- [MagicNumbers](MagicNumbers.c)
- [Mergesort](Mergesort.c)
- [MirrorNumber](MirrorNumber.c)
- [MostFrequentWordInString](MostFrequentWordInString.c)
- [multiply](multiply.c)
- [NaiveModularInverse](NaiveModularInverse.c)
- [nCrCalculatorLargeNumbers](nCrCalculatorLargeNumbers.c)
- [NestedifGreatestInteger](NestedifGreatestInteger.c)
- [NestedIfLeapYear](NestedIfLeapYear.c)
- [Number_guessing_game](Number_guessing_game.c)
- [Number_to_Character](Number_to_Character.c)
- [NumberPattern](NumberPattern.c)
- [oddandeven](oddandeven.c)
- [omang_fibonacci](omang_fibonacci.c)
- [Palindrome](Palindrome.c)
- [PalindromeNumber](PalindromeNumber.c)
- [PascalTriangle](PascalTriangle.c)
- [Pattern Combos](Pattern%20Combos.c)
- [pattern](pattern.c)
- [Pattern1](Pattern1.c)
- [PerfectNumber](PerfectNumber.c)
- [Pointers](Pointers.c)
- [Polynomial_linklist](Polynomial_linklist.c)
- [Position of First'n'Second maximum element in Array without sorting](Position%20of%20First%27n%27Second%20maximum%20element%20in%20Array%20without%20sorting.c)
- [Position_of_First'n'Second_max_elements_without_sorting_array](Position_of_First%27n%27Second_max_elements_without_sorting_array.c)
- [Prime](Prime.c)
- [Prime_No](Prime_No.c)
- [PrimeByEratosthenes](PrimeByEratosthenes.c)
- [priority_queue](priority_queue.c)
- [Quicksort](Quicksort.c)
- [Recursion](Recursion.c)
- [RecursiveFactorial](RecursiveFactorial.c)
- [RelationalOperators](RelationalOperators.c)
- [ReverseNumber](ReverseNumber.c)
- [ReverseNumber2](ReverseNumber2.c)
- [RussianPeasantMultiplication](RussianPeasantMultiplication.c)
- [SegmentationFaultorBusErrorDemo](SegmentationFaultorBusErrorDemo.c)
- [SelectionSort](SelectionSort.c)
- [Separate](Separate.c)
- [Simple_Interest](Simple_Interest.c)
- [SimpleArithmeticAverage](SimpleArithmeticAverage.c)
- [SimpleEMICalculator](SimpleEMICalculator.c)
- [SimpleInterestCalculator](SimpleInterestCalculator.c)
- [SimpleInterestInput](SimpleInterestInput.c)
- [SimpleMultiplicationTable](SimpleMultiplicationTable.c)
- [SizeofOperator](SizeofOperator.c)
- [Slicestring](Slicestring.c)
- [SparseMatrix_017](SparseMatrix_017.c)
- [SpiralMatrix](SpiralMatrix.c)
- [SquareRoot](SquareRoot.c)
- [Stack - Linked List](Stack%20-%20Linked%20List.c)
- [stack_using_linklist](stack_using_linklist.c)
- [Star_Pattern](Star_Pattern.c)
- [StringLength](StringLength.c)
- [StringReverse](StringReverse.c)
- [Structure](Structure.c)
- [StudentMarksPercentage](StudentMarksPercentage.c)
- [Subtraction](Subtraction.c)
- [SumUsingThreads](SumUsingThreads.c)
- [Swap_1](Swap_1.c)
- [Swap_2](Swap_2.c)
- [SwapByRefandCopy](SwapByRefandCopy.c)
- [SwapIntegers](SwapIntegers.c)
- [SwapIntegersWithout3rdVariable(Arithmatic)](SwapIntegersWithout3rdVariable%28Arithmatic%29.c)
- [Swapping(without using extra variable)](Swapping%28without%20using%20extra%20variable%29.c)
- [swappingwithoutthirdvariable](swappingwithoutthirdvariable.c)
- [SwapValueUsingThirdVariable](SwapValueUsingThirdVariable.c)
- [SwapValueWithoutUsingThirdVariable](SwapValueWithoutUsingThirdVariable.c)
- [Temperature](Temperature.c)
- [TemperatureSwitch](TemperatureSwitch.c)
- [TernaryOperator](TernaryOperator.c)
- [to find average & sum of a,b,c in one function](to%20find%20average%20%26%20sum%20of%20a%2Cb%2Cc%20in%20one%20function.c)
- [transposeOfMatrix](transposeOfMatrix.c)
- [Trif](Trif.c)
- [UppercaseToLowercase](UppercaseToLowercase.c)
- [volume_cone_sphere](volume_cone_sphere.c)
- [VowelorConsonant](VowelorConsonant.c)

Adapted from the beginner examples by [Gourav Thakur](https://gouravthakur.com) and contributors. See [LICENSE](LICENSE).

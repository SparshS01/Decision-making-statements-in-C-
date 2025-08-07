Aim: Expt 6 To study and implement C++ decision making statements Loops. Algorithm:

(01)

Start the program.
Declare an integer variable.
Prompt the user to enter a number and read the input.
Check if the number is divisible by 2 (using modulus operator %).
If the remainder is 0, print "The number is even."
Else, print "The number is odd."
End the program.
(02)

Start the program.
Declare three integer variables.
Prompt the user to enter the first number and read the input.
Prompt the user to enter the second number and read the input.
Prompt the user to enter the third number and read the input.
If the first number is greater than the second: a. If the first number is also greater than the third, print that the first number is the largest. b. Else, print that the third number is the largest.
Else (the second number is greater than or equal to the first): a. If the second number is greater than the third, print that the second number is the largest. b. Else, print that the third number is the largest.
End the program.
(03)

Start the program.
Declare a character variable.
Prompt the user to enter a letter and read the input.
Check if the character is a vowel (a, e, i, o, u, A, E, I, O, U).
If it is a vowel, print "The character is a vowel."
Else, print "The character is a consonant."
End the program.
(04)

Start the program.
Declare two variables for numbers and one for the result.
Declare a variable for the operator.
Prompt the user to enter the first number and read the input.
Prompt the user to enter an operator (+, -, *, /) and read the input.
Prompt the user to enter the second number and read the input.
Use a switch-case statement to check the operator:
If '+', add the numbers and print the result.
If '-', subtract the numbers and print the result.
If '*', multiply the numbers and print the result.
If '/', check if the second number is not zero:
If not zero, divide and print the result.
If zero, print an error message for division by zero.
For any other operator, print "Invalid operator!"
End the program.
(05)

Start the program.
Declare an integer variable for the day number.
Prompt the user to enter a day number (1-7) and read the input.
Use a switch-case statement to check the day number:
If 1, print "Monday".
If 2, print "Tuesday".
If 3, print "Wednesday".
If 4, print "Thursday".
If 5, print "Friday".
If 6, print "Saturday".
If 7, print "Sunday".
For any other number, print "Invalid day number!"
End the program.

Theory:

(01)

To check whether a number is odd or even.
The program checks whether a number is even or odd.
It uses the modulo operator '%' to divide the input number 'a' by 2.
If the remainder is 0 ('a % 2 == 0'), the number is even; otherwise, it's odd.
The program uses a simple 'if-else' condition and demonstrates basic input, arithmetic, and decision-making in C++.
(02)

To find largest number from given 3 numbers.
The program finds the largest among three numbers entered by the user. It uses nested 'if-else' conditions to compare the values:
First, it compares 'num1' with 'num2'.
If 'num1' is greater, it then checks whether 'num1' is also greater than 'num3'.
If true, 'num1' is the largest; otherwise, 'num3' is.
If 'num2' is greater than 'num1', the program compares 'num2' with 'num3' to find the larger between them.
(03)

To determine whether a given character is a vowel or consonant.
The program checks if the entered character is a vowel by comparing it with all vowel letters (both uppercase and lowercase).
If it matches, it prints "vowel"; otherwise, it prints "consonant".
It uses 'if-else' and logical OR ('||') operators.
(04)

Program for calculator using switch casee.
The program is a simple calculator that performs basic arithmetic operations: addition, subtraction, multiplication, and division.
It takes two numbers and an operator ('+', '-', '*', or '/') as input. Using a 'switch' statement, it performs the operation based on the chosen operator.
It also checks for division by zero to avoid an error.
The program demonstrates the use of 'switch-case' and basic arithmetic in C++.
(05)

Switch-case-default to display a weekday.
The program takes a number from 1 to 7 as input and uses a 'switch' statement to print the corresponding day of the week.
Each 'case' represents a day (1 = Monday, 2 = Tuesday, etc.).
If the input doesn't match any case from 1 to 7, the 'default' case prints "Invalid day number!".
This program demonstrates the use of the 'switch-case' structure for menu-based or choice-driven output.

Conclusion: The previous six programs demonstrate the use of conditional and 'switch-case' statements in C++ for building menu-driven applications, making decisions, and performing operations like arithmetic, comparisons, and classifications. They highlight how control structures help in solving real-world problems through interactive user input and logical flow.

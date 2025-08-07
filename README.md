Aim:
Expt 6 – To study and implement C++ decision-making statements and loops.

Algorithm:
(01) Check if Number is Even or Odd
Start the program.

Declare an integer variable.

Prompt the user to enter a number and read the input.

Check if the number is divisible by 2 (using modulus operator %).

If the remainder is 0, print "The number is even."

Else, print "The number is odd."

End the program.

(02) Find the Largest Among 3 Numbers
Start the program.

Declare three integer variables.

Prompt the user to enter the first number and read the input.

Prompt the user to enter the second number and read the input.

Prompt the user to enter the third number and read the input.

If the first number is greater than the second:
a. If the first number is also greater than the third, print that the first number is the largest.
b. Else, print that the third number is the largest.

Else (the second number is greater than or equal to the first):
a. If the second number is greater than the third, print that the second number is the largest.
b. Else, print that the third number is the largest.

End the program.

(03) Check if Character is Vowel or Consonant
Start the program.

Declare a character variable.

Prompt the user to enter a letter and read the input.

Check if the character is a vowel (a, e, i, o, u, A, E, I, O, U).

If it is a vowel, print "The character is a vowel."

Else, print "The character is a consonant."

End the program.

(04) Simple Calculator Using Switch-Case
Start the program.

Declare two variables for numbers and one for the result.

Declare a variable for the operator.

Prompt the user to enter the first number and read the input.

Prompt the user to enter an operator (+, -, *, /) and read the input.

Prompt the user to enter the second number and read the input.

Use a switch-case statement to check the operator:
a. If +, add the numbers and print the result.
b. If -, subtract the numbers and print the result.
c. If *, multiply the numbers and print the result.
d. If /, check if the second number is not zero:

If not zero, divide and print the result.

If zero, print an error message for division by zero.
e. For any other operator, print "Invalid operator!"

End the program.

(05) Weekday Display Using Switch-Case
Start the program.

Declare an integer variable for the day number.

Prompt the user to enter a day number (1–7) and read the input.

Use a switch-case statement to check the day number:
a. If 1, print "Monday"
b. If 2, print "Tuesday"
c. If 3, print "Wednesday"
d. If 4, print "Thursday"
e. If 5, print "Friday"
f. If 6, print "Saturday"
g. If 7, print "Sunday"
h. For any other number, print "Invalid day number!"

End the program.

(06) Nested Switch-Case Food Menu
Start the program.

Display the main menu:

Snacks

Meal

Beverages

Prompt the user to enter their main choice and read the input.

Use a switch-case statement for the main choice:
a. If choice is 1 (snacks):

Display snacks menu: 1. Samosa, 2. Vadapav, 3. Maggi

Prompt the user to enter their snacks choice and read the input

Use a switch-case for snacks choice and print the selected item
b. If choice is 2 (meal):

Display meal menu: 1. Veg, 2. Non-Veg

Prompt the user to enter their meal choice and read the input

Use a switch-case for meal choice and print the selected item
c. If choice is 3 (beverages):

Display beverages menu: 1. Tea, 2. Coffee, 3. Cold Drink

Prompt the user to enter their beverages choice and read the input

Use a switch-case for beverages choice and print the selected item

End the program.

Theory:
(01) Even/Odd Check:
Uses % operator and if-else to determine evenness of a number.

(02) Largest Among 3:
Nested if-else used to compare three numbers step by step.

(03) Vowel or Consonant:
Checks input against vowels (case insensitive) using logical OR (||) with if-else.

(04) Calculator:
Performs +, -, *, / using switch-case, checks for division by zero.

(05) Weekday with switch-case:
Maps day number (1–7) to weekday names using switch-case.

(06) Food Menu (Nested switch-case):
Demonstrates switch-case inside another switch for multi-level menus.
Note: Common mistake — using same variable for both main and sub choice — must use different variables.

Conclusion:
The six C++ programs above demonstrate decision-making using if-else, nested if-else, and switch-case structures. They are useful for user-driven logic, menu systems, and real-world decision-based outputs. These exercises improve understanding of how programs control flow based on conditions and user inputs.


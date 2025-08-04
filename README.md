Student Name: Marius Sandru Student ID: 575577 Study Year: Computing Year 1 Sem 1

C++ Programming Exercises

This repository contains solutions to a series of C++ programming exercises designed to practice fundamental programming concepts such as variables, loops, functions, and control structures. Each exercise includes a complete C++ program with comments and adheres to the specified requirements. Below is an overview of each exercise, including its objectives, constraints and any additional notes.

Exercises

Coding is Cool (10 marks)
Objective: Complete a C++ program by filling in the blanks to output "Coding is Cool" to the console.

Requirements:

Fill in the blanks in the provided code template. Output: "Coding is Cool" followed by a newline.

Solution File: 01_Coding_Is_Cool.cpp Notes: Uses cout for console output and endl for a newline. Basic introduction to C++ output syntax.

Simple Sums (15 marks)
Objective: Create a program to declare two integer variables, add them, and print the sum.

Requirements: Declare an integer variable initialized to 8. Declare an integer variable initialized to 10. Declare a third integer variable to store their sum. Print the sum to the console. Solution File: 02_Simple_Sums.cpp Output: 18

Biography (25 marks)
Objective: Print a user's name, hometown, and age to the console with specific constraints.

Requirements: Store name, hometown, and age in variables of appropriate data types (string for name and hometown, int for age). Print each item on a new line using a single cout statement. Solution File: 03_Biography.cpp

Output (for name: Marius Sandru, hometown: Constanta, age: 39): Marius Sandru Constanta 39

Notes: Uses \n for newlines within a single cout.

Primitive Quiz (30 marks)
Objective: Create a question-and-answer program for the question "What is the capital of France?".

Requirements: Ask the user the question and prompt for a response. Check if the answer is "Paris" and output whether the answer is correct or wrong. Solution File: 04_Primitive_Quizz.cpp

Output (example): What is the capital of France? Paris Your answer is correct! Notes: Uses getline to handle string input.

Days of the Month (30 marks) Objective: Create a program to inform the user how many days are in a month using a switch statement.
Requirements: Prompt the user for a month number (1 = January, 12 = December). Use a switch statement to output the number of days in the corresponding month. Handle invalid inputs. Solution File: 05_Days_Of_The_Month.cpp

Output (example): Enter a month (1 for January, 12 for December): 2 February has 28 days (29 in a leap year). Default case handles invalid inputs.

Brute Force Attack (30 marks) Objective: Simulate a password-protected safe where the user guesses the password (12345).
Requirements: Define the correct password as 12345. Use a while loop to allow multiple password attempts until correct. Solution File: 06_Brute_Force_Attack.cpp

Output "Welcome to the Secure Area" when correct. Output (example): Enter the password: 12345 Welcome to the Secure Area

Notes:

Basic solution uses a simple while loop without attempt limits.

Some Counting (20 marks)
Objective: Use for loops to perform various counting tasks and print results.

Requirements: Loop 1: Count up from 0 to 50 (increment by 1). Loop 2: Count down from 50 to 0 (decrement by 1). Loop 3: Count up from 30 to 50 (increment by 1). Loop 4: Count down from 50 to 10 (decrement by 2). Loop 5: Count up from 100 to 200 (increment by 5). Solution File: 07_Some_Counting.cpp

Output example:

Counting up from 0 to 50: 0 1 2 ... 50

Counting down from 50 to 0: 50 49 48 ... 0 ...

Notes:

All loops are included in a single program for clarity. Outputs are separated by newlines for readability.

Simple Search (30 marks)
Objective: Search for the string "Sam" in a predefined string array.

Requirements: Initialize an array with "Jake", "Zac", "Ian", "Ron", "Sam", "Dave". Loop through the array to check for "Sam". Output whether the search term was found. Solution File: 08_Simple_Search.cpp

Output: The name "Sam" was found in the array.

Notes:

Uses a for loop and breaks once the term is found for efficiency.

Hello (3060 marks)
Objective: Complete a program by filling in blanks to define and call a function that outputs "Hello".

Requirements: Fill in blanks to define a function hello that prints "Hello". Call the function from main. Solution File: 09_Hello.cpp

Output:

Hello

Notes:

Introduces function declaration and calling. Uses void return type and cout with endl.

Is it even? (35 marks)
Objective: Test if a user-provided number is even or odd.

Requirements: Prompt for a number in main. Pass the number to a function that checks if it's even. Return "The provided number is even" or "The provided number is odd". Output the returned message in main.

Output (example for input 10):

Enter a number: 10 The provided number is even

Notes: Uses modular operator (%) to check evenness. Returns a string from the function for message output.

General Notes:

All programs are written in C++ and include comments for clarity. Solutions use standard libraries (iostream, string) and adhere to basic C++ syntax. Advanced/optional requirements are noted but not implemented in the provided solutions unless specified. Each program is designed to be standalone and can be compiled using a standard C++ compiler (e.g., g++).

Files are named descriptively to reflect their purpose (e.g., sum_integers.cpp, quiz.cpp).# S1_Programming_Skills_Portfolio Set_Exercises_C++

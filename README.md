# Operators-in-C++

**Experiment No.: 3**

**Name**: Operations with Operators in C++

**Tools Used**: VS Code

**program 1**: This C++ program takes the last 5 digits of your PRN as input and prints each digit in reverse order. It uses the modulus and division operations to extract and display digits one by one from the least significant to the most significant.

**Theory of program 1**: This program demonstrates the concept of extracting digits from an integer using loops and arithmetic operations. It also reinforces the use of:

i. `while` loop for repetition

ii. `%` (modulus) to get the last digit

iii. `/` (division) to remove the last digit


**ALgorithm**:
Step 1. Start the program.

Step 2. Input a 5-digit number (last 5 digits of PRN).

Step 3. Use a loop to repeat until the number becomes 0:
   - Extract the last digit using `% 10`.
   - Print the digit.
   - Remove the last digit using `/ 10`.
     
Step 4. End the program.


**program 2**: This C++ program accepts marks of 5 subjects, calculates the total and average, and then assigns a grade based on the average marks using conditional statements `(if-else ladder)`.

**Theory**:

This program demonstrates the use of:
- Arithmetic operations to compute total and average
- Conditional statements (if-else) to determine the grade based on average
- Float and int data types for precise calculations
  
**Algorithm**:

Step 1. Start the program.

Step 2. Take input for 5 subject marks.

Step 3. Display the marks.

Step 4. Calculate total as the sum of all marks.

Step 5. Calculate average as `total / 5.0`.

Step 6. Use `if-else` statements to determine grade:
    - Compare average with predefined grade boundaries.
    
Step 7. Display total, average, and result (grade).

Step 8. End the program.

**Conclusion**:
In Program 1, we successfully extracted and printed the individual digits of a number using arithmetic operations and loops. This helped reinforce the concept of number manipulation and digit extraction using modulus (%) and division (/) operations in C++.

In Program 2, we calculated the total and average marks of five subjects and determined the corresponding grade using conditional statements. This program illustrated the use of input handling, arithmetic calculations, and if-else logic in a practical grading system.

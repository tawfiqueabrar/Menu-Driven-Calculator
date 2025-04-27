This Menu-Driven Calculator program is a simple yet effective tool written in C that allows users to perform basic arithmetic operations. With an interactive, user-friendly interface, users can select operations like addition, subtraction, multiplication, division, and modulus. The program also handles common errors such as division by zero, ensuring smooth execution.

Features
	•	Addition: Adds two numbers and displays the result.
	•	Subtraction: Subtracts the second number from the first and shows the result.
	•	Multiplication: Multiplies two numbers and outputs the result.
	•	Division: Divides the first number by the second, with proper error handling for division by zero.
	•	Modulus: Computes the modulus (remainder) when dividing two integer values.
	•	Exit: Allows the user to quit the program gracefully.

How to Run the Program

Prerequisites

To compile and run this program, you need a C compiler such as GCC. If you don’t have one installed, you can download and install GCC from https://gcc.gnu.org/.

Steps to Run
	1.	Clone or download the repository to your local machine.
	2.	Open a terminal and navigate to the directory where the calculator.c file is located.
	3.	Compile the code using a C compiler, for example:
gcc -o calculator calculator.c
This will generate an executable file named calculator (or calculator.exe on Windows).
	4.	Run the program:
	•	On Linux/Mac:
./calculator
	•	On Windows:
calculator.exe
	5.	The program will present a menu with various arithmetic operations. Select an option and input the required numbers to see the result.

Error Handling
	•	If the user selects an invalid option (a number outside the valid range), the program will prompt for a valid input.
	•	If division or modulus by zero is attempted, the program will display an error message: Cannot divide by zero!.
	•	The modulus operation works only with integers. If selected, the program will ask for integer inputs.

License

This project is licensed under the MIT License. See the LICENSE file for more details.

Contributing

If you have suggestions for improvements or encounter any issues, feel free to open an issue or submit a pull request. Contributions are always welcome!

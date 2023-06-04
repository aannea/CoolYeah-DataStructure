# Data-Structure
Welcome to the Data-Structure repository!

## About
Data-Structure is a repository that showcases various data structure implementations using the C++ programming language. The repository aims to provide examples of commonly used data structures in programming, including arrays, linked lists, stacks, queues, trees, and graphs. Each implementation is accompanied by explanations and usage examples to aid in understanding the concepts and practical application of data structures in programming.

### 001_Array.cpp
The program above is a simple C++ program that allows the user to input data for a certain number of students and then displays their names, grades, and whether they passed or not. Let's break down the program and provide a brief explanation:
- The program begins with including the necessary header file, iostream, which allows input and output operations.
- The using namespace std; statement is used to avoid writing std:: before standard library functions, such as cout and cin.
- The main() function is the entry point of the program.
- Inside the main() function, variables are declared, including n to store the number of students, and arrays nama, status, and nilai to store the names, statuses, and grades of the students, respectively. The size of the - arrays is set to 10, assuming a maximum of 10 students will be entered.
- The user is prompted to enter the number of data inputs (n), indicating the number of students' records to be entered.
- A loop is used to input the data for each student. The loop runs n times, and in each iteration, the user is prompted to enter the name and grade of the student. Based on the grade entered, the status of the student is - determined and stored in the status array.
- After all the data is inputted, the program displays a header for the table-like output.
- Another loop is used to display the contents of the arrays in a tabular format, including the serial number, name, grade, and status of each student.
- Finally, the return 0; statement indicates that the program has executed successfully and terminates.

### 002_ArrayMatrix.cpp
This program performs matrix addition on two 2-dimensional arrays (a and b) and stores the result in another array c. Here's a breakdown of the program:
- The program begins with the necessary header file inclusion and the using namespace std; statement.
- The main() function is the entry point of the program.
- Inside the main() function, three 2-dimensional arrays (a, b, and c) of size 3x5 are declared and initialized with respective values.
- The program then displays the contents of array a using nested loops to iterate over the rows and columns.
- After displaying array a, the program displays the contents of array b using the same nested loop structure.
- Next, the program performs matrix addition by iterating over each element of arrays a and b, adds the corresponding elements, and stores the result in array c.
- Finally, the program displays the resulting matrix c (the sum of arrays a and b).

### 003_ArrayReceipt.cpp
This program is an implementation of a simple point-of-sale (POS) system using C++. It allows the user to select items from a menu, input the quantity, and calculate the total amount to be paid. Here's a breakdown of the program:
- The necessary header files, iostream and windows.h, are included.
- The using namespace std; statement is used.
- Several arrays and variables are declared to store information about the items, such as item codes, names, prices, and user selections.
- The gotoxy() function is defined, which sets the cursor position for displaying elements on the console screen.
- The tampil() function is defined to display the menu, including item codes, names, and prices.
- The inputa() function allows the user to input the item codes and quantities they want to purchase.
- The hasil() function calculates and displays the total amount to be paid and prompts the user to enter the payment amount.
- The main() function is the entry point of the program.
- Inside main(), the tampil(), inputa(), and hasil() functions are called sequentially to display the menu, get user inputs, and show the final calculation.
- The program ends with the return 0 statement.
  
### 004_ArrayStudent.cpp
This program allows the user to input student data, including their names, NIM (student ID), and scores for various assessments. It then calculates the average score for each student and displays the total number of inputs, the average score, and the individual averages for each student.
Here's a breakdown of the program:
- The necessary header files, iostream, windows.h, and iomanip, are included.
- The using namespace std; statement is used.
- Several arrays and variables are declared to store student information, such as names, NIMs, and scores for different assessments.
- The gotoxy() function is defined, which sets the cursor position for displaying elements on the console screen.
- The isi() function allows the user to input student data, including names, NIMs, and scores for various assessments. The function uses a loop to enable multiple inputs.
- The tampil() function displays the results by calculating the average scores for each student and displaying the total number of inputs, the average score, and the individual averages for each student.
- The main() function is the entry point of the program.
- Inside main(), the isi() function is called to input student data, followed by the tampil() function to display the results.
- The program ends with the return 0; statement.

### 005_ArrayMatrixDeterminantAdjointAndTranspose.cpp
This program performs basic matrix operations. Here's a breakdown of the program:
- The necessary header files, iostream and windows.h, are included.
- The gotoxy() function is defined, which sets the cursor position for displaying elements on the console screen.
- The main() function is the entry point of the program.
- Inside main(), arrays matrix, matrix2, and invers are declared to store matrix values.
- The user is prompted to input values for the matrix elements using a series of gotoxy() and cout statements.
- The program displays the entered matrix using another set of gotoxy() and cout statements.
- The program calculates the adjoint of the matrix by assigning values to matrix2.
- The program displays the adjoint matrix using gotoxy() and cout.
- The program calculates the determinant of the matrix and displays it.
- The program calculates the inverse of the matrix by dividing each element of matrix2 by the determinant and assigns the result to invers.
- The program displays the inverse matrix.
- The program ends with the return 0; statement.

### 006_ArrayThreeDimension.cpp
This program demonstrates the use of a three-dimensional array to store and display integer values. Here's a breakdown of the program:
- The necessary header file, iostream, is included.
- The main() function is the entry point of the program.
- Inside main(), a three-dimensional array arr is declared with dimensions 2x3x4.
- The array is initialized with values using nested initializer lists.
- A set of nested loops is used to iterate over each element of the array.
- The program prints the value of each element using cout.
- The program includes newline characters to format the output in a grid-like pattern.
- The program ends with the return 0; statement.

### 007_ArrayMultiDimension.cpp
This program demonstrates the input and output of elements in a three-dimensional array. Here's a breakdown of the program:
- The necessary header file, iostream, is included.
- The program enters the main() function, which serves as the entry point.
- Inside main(), a three-dimensional array arr with dimensions 2x2x2 is declared.
- The program uses nested loops to iterate over each element of the array for input.
- The user is prompted to enter the value for each element, and it is stored in the corresponding position in the array.
- The program uses nested loops again to iterate over each element of the array for output.
- The program prints the value of each element along with its indices.
- The program includes newline characters for formatting.
- Another set of nested loops is used to display the array without indices.
- The program ends with the return 0; statement.

### 008_ArrayMultidimensionMaximum.cpp
This program allows the user to input values into a three-dimensional array and then finds the maximum value among those elements. Here's a breakdown of the program:
- The necessary header file, iostream, is included.
- The program enters the main() function, which serves as the entry point.
- Inside main(), the variables a, b, c, d, and e are declared. a is initialized to 0, b is the three-dimensional array, and c is used to store the maximum value.
- The program uses nested loops to iterate over each element of the array for input.
- The user is prompted to enter the value for each element, and it is stored in the corresponding position in the array.
- After the input is complete, the program initializes c with the first element of the array, b[0][0][0].
- The program uses nested loops again to iterate over each element of the array for finding the maximum value.
- If a greater value is found, it is assigned to c.
- Once all elements are checked, the program outputs the maximum value stored in c.
- The program ends with the return 0; statement.

### 009_ArrayMultiDimensionVariableSize.cpp
This program allows the user to input values into a three-dimensional array of variable size. Here's a breakdown of the program:
- The necessary header file, iostream, is included.
- The program enters the main() function, which serves as the entry point.
- Inside main(), the variables a, b, c, e, f, g, and h are declared. a, b, and c represent the dimensions of the array, and e, f, and g are used as loop counters.
- The program prompts the user to enter the dimensions of the array (a, b, c).
- An array d of size a x b x c is declared.
- The program uses nested loops to iterate over each element of the array for input.
- The user is prompted to enter the value for each element, and it is stored in the corresponding position in the array.
- After the input is complete, the program uses nested loops again to iterate over each element of the array for output.
- The program displays the value of each element to the user.
- Finally, the program displays the array in a matrix-like format.
- The program ends with the return 0; statement.

### 010_ArrayMatrixCalculator.cpp
This program is a calculator for matrix operations. It provides options for matrix addition, subtraction, multiplication, and transposition. Here's a breakdown of the program:
- The necessary header file, <iostream>, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- Global variables a, b, c, e, f, g, i, and k are declared to hold various values and serve as loop counters.
- The program defines a menu label to be used for looping back to the main menu.
- The program displays a menu with options for different matrix operations.
- The user is prompted to select an option (k).
- Depending on the selected option, the program executes the corresponding code block using a switch statement.
- For each operation, the program prompts the user to input the dimensions of the matrix (a, b, c).
- An array d of size a x b x c is declared to hold the matrix elements.
- Additional arrays h and j are declared for intermediate calculations during matrix addition, subtraction, and multiplication.
- The program uses nested loops to input the values of the matrix elements.
- After the input is complete, the program displays the matrix elements to the user.
- Depending on the selected operation, the program performs the corresponding matrix calculation using nested loops and stores the result in the appropriate array (h or j).
- The program displays the result of the matrix operation to the user.
- The program pauses execution and waits for the user to press any key before returning to the main menu.
- The program uses the goto statement to jump back to the menu label and repeat the process.
- The default case in the switch statement handles the situation where an invalid option is selected, causing the program to exit.
- The program ends with the return 0; statement.

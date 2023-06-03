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

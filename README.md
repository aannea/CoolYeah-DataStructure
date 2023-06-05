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
- The necessary header file, iostream, is included.
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

### 011_Pointers.cpp
This program demonstrates the use of pointers in C++. Here's a breakdown of the code:
- The necessary header file, iostream, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- An integer variable a is declared and initialized with the value 100.
- An integer pointer variable b is declared and assigned the address of a using the address-of operator (&).
- The program displays the value of b using cout to output the address of a. This is done by dereferencing the pointer b and accessing its value with the * operator.
- The program displays the value of a using cout by dereferencing the pointer b and accessing the value it points to.
- The main() function ends with the return 0; statement, indicating successful program execution.

### 012_PointersLocation.cpp
In this program, there is a pointer variable p that is not initialized before it is dereferenced. This can lead to undefined behavior, as the pointer does not point to a valid memory location. Here's a breakdown of the code:
- The necessary header file, iostream, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- An integer variable v is declared and initialized with the value 7.
- An integer pointer variable p is declared but not assigned any value.
- The program displays the value of v using cout.
- The program attempts to display the value pointed to by the uninitialized pointer p using *p and cout. This will result in undefined behavior since p is not assigned a valid memory address.
- The program displays the memory address of v using the address-of operator (&) and cout.
- The program displays the memory address of the pointer p itself using the address-of operator (&) and cout.
- The main() function ends with the return 0; statement, indicating successful program execution.

### 013_PointerModifyValue.cpp
This program demonstrates the use of pointers to modify the values of variables. Here's how the code works:
- The necessary header file, iostream, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- Two integer variables, value1 and value2, are declared and initialized with the values 5 and 15, respectively.
- An integer pointer variable, mypointer, is declared.
- The program displays the initial values of value1 and value2 using cout.
- The program initializes the pointer mypointer with the address of value1 using the address-of operator (&).
- The program modifies the value at the memory location pointed to by mypointer to 10 by dereferencing mypointer and assigning the new value.
- The pointer mypointer is re-assigned with the address of value2.
- The program modifies the value at the new memory location pointed to by mypointer to 20.
- The program displays the modified values of value1 and value2 using cout.
- The main() function ends with the return 0; statement, indicating successful program execution.

### 014_PointerArray.cpp
This program demonstrates the use of a pointer to access the elements of an array. Here's how the code works:
- The necessary header file, iostream, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- An integer array, data, is declared and initialized with values {1, 2, 3, 4, 5}.
- An integer pointer variable, pData, is declared and assigned the address of the first element of the data array using the array name without an index (data is equivalent to &data[0]).
- An integer variable a is declared and initialized to 0.
- The program enters a while loop that iterates as long as a is less than 5.
- Within the loop, the program prints the value at the memory location pointed to by pData with the index a. This is done by using pData[a].
- The loop increments the value of a after each iteration.
- Once the loop completes, the program exits the loop and the main() function ends with the return 0; statement, indicating successful program execution.

### 015_PointerArrayInput.cpp
This program allows the user to input 10 integers into an array and then prints the values using a pointer. Here's how the code works:
- The necessary header file, iostream, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- An integer array, a, of size 10 is declared.
- An integer variable, b, and an integer pointer, c, are declared.
- The pointer c is assigned the address of the first element of the array a using the array name without an index (a is equivalent to &a[0]).
- The program prompts the user to input 10 integers into the array a using a while loop.
- Within the loop, the program asks the user to enter the value for each element of the array and stores it in a[b].
- The loop increments the value of b after each iteration.
- After the loop completes, the program uses system("pause") and system("cls") to pause the program execution and clear the console screen.
- The program then prints the values of the array a using a pointer with another while loop.
- Within this loop, the program accesses and prints the value at the memory location pointed to by c with the index b using c[b].
- The loop increments the value of b after each iteration.
- Once the loop completes, the program exits the loop and the main() function ends with the return 0; statement, indicating successful program execution.

### 016_PointerArrayInputLocation.cpp
This program allows the user to input 10 integers into an array, prints the values using a pointer, and then displays the memory addresses of each array element. Here's how the modified code works:
- The necessary header file, iostream, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- An integer array, a, of size 10 is declared.
- An integer variable, b, and an integer pointer, c, are declared.
- The pointer c is assigned the address of the first element of the array a using the array name without an index (a is equivalent to &a[0]).
- The program prompts the user to input 10 integers into the array a using a while loop.
- Within the loop, the program asks the user to enter the value for each element of the array and stores it in a[b].
- The loop increments the value of b after each iteration.
- After the loop completes, the program uses system("pause") and system("cls") to pause the program execution and clear the console screen.
- The program then prints the values of the array a using a pointer with another while loop.
- Within this loop, the program accesses and prints the value at the memory location pointed to by c with the index b using c[b].
- The loop increments the value of b after each iteration.
- After the loop completes, the program uses system("pause") and system("cls") again to pause the program execution and clear the console screen.
- The program then displays the memory addresses of each array element using a while loop.
- Within this loop, the program prints the memory address of each element using &c[b].
- The loop increments the value of b after each iteration.
- Once the loop completes, the program exits the loop and the main() function ends with the return 0; statement, indicating successful program execution.

### 017_PointerArrayInputLocationInitialization.cpp
This program allows the user to input 10 integers into an array, display the values using a pointer, and then perform an initialization process on selected array elements. Here's how the modified code works:
- The necessary header file, iostream, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- Two integer arrays, a and e, of size 10 are declared.
- Three integer variables, b, d, and f, are declared.
- An integer pointer, c, is declared and initialized with the address of the first element of the array a using the array name without an index (a is equivalent to &a[0]).
- The program prompts the user to input 10 integers into the array a using a while loop.
- Within the loop, the program asks the user to enter the value for each element of the array and stores it in a[b].
- The loop increments the value of b after each iteration.
- After the loop completes, the program uses system("pause") and system("cls") to pause the program execution and clear the console screen.
- The program then prints the values of the array a using a pointer with another while loop.
- Within this loop, the program accesses and prints the value at the memory location pointed to by c with the index b using c[b].
- The loop increments the value of b after each iteration.
- After the loop completes, the program uses system("pause") and system("cls") again to pause the program execution and clear the console screen.
- The program then displays the memory addresses of each array element using a while loop.
- Within this loop, the program prints the memory address of each element using &c[b].
- The loop increments the value of b after each iteration.
- After the loop completes, the program uses system("pause") to pause the program execution.
- The program then enters a label called ulang, where it asks the user to specify the number of elements they want to initialize in the array.
- If the user inputs a value less than 5, the program displays an error message and returns to the ulang label.
- If the user inputs a value greater than 10, the program displays an error message and returns to the ulang label.
- If the user inputs a valid number of elements (between 5 and 10), the program asks the user to input the values for those elements using a while loop.
- Within the loop, the program asks the user to enter the value for each element specified by e[b] and stores it in e[b].
- The loop increments the value of b after each iteration.
- After the loop completes, the program prints a blank line.
- The program then enters another while loop to perform the initialization process on the selected array elements.
- Within this loop, the program asks the user to input the new value for each selected array element specified by e[b] using c=&a[e[b]] to assign the address of a[e[b]] to the pointer c, and then assigns f to *c.
- The loop increments the value of b after each iteration.
- After the loop completes, the program prints a blank line.
- The program then displays the initialized values of the selected array elements using a while loop.
- Within this loop, the program prints the index e[b] and the corresponding value a[e[b]].
- The loop increments the value of b after each iteration.
- After the loop completes, the program uses system("pause") and system("cls") again to pause the program execution and clear the console screen.
- The program then displays the values of the entire array a using a while loop.
- Within this loop, the program prints the index b and the corresponding value a[b].
- The loop increments the value of b after each iteration.
- Once the loop completes, the program exits the loop and the main() function ends with the return 0; statement, indicating successful program execution.

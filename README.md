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

### 018_Struct.cpp
This program demonstrates the usage of a structure in C++ to represent and store information about two students. Here's how the code works:- 
- The necessary header file, \<iostream>, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- A structure named mahasiswa is defined, which contains four member variables: nim (student ID), nama (name), alamat (address), and jurusan (major).
- Two instances of the mahasiswa structure, a and b, are declared.
- The member variables of a and b are assigned specific values using the dot operator.
- The program then prints the details of student a using cout statements, accessing the member variables using the dot operator.
- A blank line is printed.
- The program then prints the details of student b using cout statements, again accessing the member variables using the dot operator.
- Finally, the program exits the main() function with the return 0; statement, indicating successful program execution.

### 019_StructArray.cpp
This program demonstrates the usage of an array of structures in C++. Here's how the code works:
- The necessary header file, \<iostream>, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The main() function is defined as the entry point of the program.
- A structure named pegawai is defined, which contains three member variables: nama (name), alamat (address), and gaji (salary).
- An array of pegawai structures named pl is declared with a size of 3.
- Three instances of the pegawai structure, {"Budi", "Purwokerto", 35000000}, {"Andre", "Tegal", 50000000}, and {"Rini", "Bandung", 40000000}, are assigned to the elements of the pl array during initialization.
- The address of the first element of the pl array is accessed using pl[0] and the alamat member is modified to "Banyumas".
- A for loop is used to iterate over the elements of the pl array.
- Inside the loop, the details of each pegawai structure are printed using cout statements, accessing the member variables using the dot operator.
- A blank line is printed after each iteration of the loop.
- Finally, the program exits the main() function with the return 0; statement, indicating successful program execution.

### 020_StructNested.cpp
This program demonstrates the usage of nested structures in C++. Here's how the code works:
- The necessary header file, \<iostream>, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- Two structure definitions are provided: fakultas (faculty) and jurusan (department).
- The fakultas structure contains two member variables: namafakultas (faculty name) and kodefakultas (faculty code).
- The jurusan structure contains three member variables: faculty (an instance of the fakultas structure), namajurusan (department name), and kelas (class).
- An instance of the fakultas structure named f1 is created.
- An instance of the jurusan structure named j1 is created.
- The namafakultas member variable of f1 is assigned the value "Informatika", and the kodefakultas member variable is assigned the value "IF".
- The namafakultas member variable of j1.faculty (the nested fakultas structure within j1) is assigned the value "Informatika". The namajurusan member variable of j1 is assigned the value "Teknik Informatika", and the kelas member variable is assigned the value "IFB".
- The program prints the values of the member variables using cout statements.
- The program exits the main() function with the return 0; statement, indicating successful program execution.

### 021_StructNestedFauna.cpp
This program demonstrates the usage of nested structures in C++ to represent different types of animals. Here's how the code works:
- The necessary header file, \<iostream>, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- Two structure definitions are provided: hewan (animal), hewan_darat (land animal), and hewan_laut (sea animal).
- The hewan structure contains member variables representing various characteristics of an animal.
- The hewan_darat structure contains a nested hewan structure as well as additional member variables specific to land animals.
- The hewan_laut structure contains a nested hewan structure as well as additional member variables specific to sea animals.
- Instances of hewan_darat and hewan_laut structures named hd1 and hl1 are created, respectively.
- The member variables of the structures are assigned values using initializer lists.
- The program prints the information about the land animal (hd1) and sea animal (hl1) using cout statements.
- The program exits the main() function with the return 0; statement, indicating successful program execution.

### 022_StructArayMart.cpp
This program allows the user to input information about 10 different items in a store and displays the collected data. Here's how the code works:
- The necessary header file, \<iostream>, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- An integer variable a is declared to control the loop.
- The toko structure is defined, which represents the attributes of a store item, such as its code, name, stock quantity, and price.
- An array of toko structures named isitok is created to store information about 10 items.
- A loop is initiated to collect data for each item:
- The user is prompted to enter the code, name, stock quantity, and price of the item.
- The input values are stored in the corresponding member variables of the isitok array at index a.
- The system("pause") and system("cls") statements are used to pause the program and clear the screen before collecting data for the next item.
- The loop iterates until data for all 10 items is collected.
- After the data is collected, the program displays the information of all the items using another loop:
- The loop iterates through each item in the isitok array.
- The code, name, stock quantity, and price of each item are printed using cout statements.
- The program exits the main() function with the return 0; statement, indicating successful program execution.

### 023_LinkedList.cpp
This program demonstrates the implementation of a singly linked list in C++. The linked list operations such as inserting at the beginning and end, deleting from the beginning and end, and displaying the list are implemented using functions. Here's how the code works:
- The necessary header file, \<iostream>, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The Node struct is defined, representing a node in the linked list. It contains an integer data and a pointer next to the next node.
- Two global pointers head and tail are declared to keep track of the first and last nodes of the linked list, respectively.
- The init() function initializes the head and tail pointers to NULL, indicating an empty list.
- The isEmpty() function checks whether the linked list is empty by verifying if the head pointer is NULL.
- The insertDepan() function inserts a new node at the beginning of the list. It creates a new node, assigns the given value to its data member, and updates the head pointer accordingly.
- The insertBelakang() function inserts a new node at the end of the list. It creates a new node, assigns the given value to its data member, and updates the tail pointer accordingly.
- The hitunglist() function counts the number of nodes in the linked list and returns the count.
- The insertTengah() function inserts a new node at a specified position in the list. It checks whether the position is within the valid range and handles the cases for inserting at the beginning, middle, and end of the list.
- The hapusdepan() function deletes the first node from the list. It checks if the list is empty and updates the head pointer accordingly.
- The hapusbelakang() function deletes the last node from the list. It checks if the list is empty and updates the tail pointer accordingly.
- The hapustengah() function deletes a node at a specified position in the list. It checks whether the position is within the valid range and handles the cases for deleting at the beginning, middle, and end of the list.
- The ubahdepan() function modifies the value of the first node in the list. It checks if the list is empty and updates the data member of the head node.
- The ubahtengah() function modifies the value of a node at a specified position in the list. It checks whether the position is within the valid range and updates the data member of the corresponding node.
- The ubahbelakang() function modifies the value of the last node in the list. It checks if the list is empty and updates the data member of the tail node.
- The clearlist() function deletes all nodes in the list, freeing the memory allocated for each node.
- The tampil() function displays the data stored in each node of the list by traversing the linked list and printing the data member of each node.
- In the main() function:
  - The init() function is called to initialize the list.
  - Various operations such as inserting at the beginning and end, deleting from the beginning and end, and displaying the list are performed to demonstrate the functionality of the linked list.
  - The tampil() function is called after each operation to display the updated list.
  - The program exits the main() function with the return 0; statement, indicating successful program execution.

### 024_LinkedListMenu.cpp
This code is an implementation of a menu-driven program that allows users to interact with the linked list. Here's a breakdown of how the code works:- 
- The necessary header file, \<iostream>, is included.
- The using namespace std; directive is used to avoid having to prefix standard library elements with std::.
- The Node struct is defined, representing a node in the linked list. It contains an integer data and a pointer next to the next node.
- Two global pointers head and tail are declared to keep track of the first and last nodes of the linked list, respectively.
- The init() function initializes the head and tail pointers to NULL, indicating an empty list.
- The isEmpty() function checks whether the linked list is empty by verifying if the head pointer is NULL.
- The insertDepan() function inserts a new node at the beginning of the list. It creates a new node, assigns the given value to its data member, and updates the head pointer accordingly.
- The insertBelakang() function inserts a new node at the end of the list. It creates a new node, assigns the given value to its data member, and updates the tail pointer accordingly.
- The hitunglist() function counts the number of nodes in the linked list and returns the count.
- The insertTengah() function inserts a new node at a specified position in the list. It checks whether the position is within the valid range and handles the cases for inserting at the beginning, middle, and end of the list.
- The hapusdepan() function deletes the first node from the list. It checks if the list is empty and updates the head pointer accordingly.
- The hapusbelakang() function deletes the last node from the list. It checks if the list is empty and updates the tail pointer accordingly.
- The hapustengah() function deletes a node at a specified position in the list. It checks whether the position is within the valid range and handles the cases for deleting at the beginning, middle, and end of the list.
- The ubahdepan() function modifies the value of the first node in the list. It checks if the list is empty and updates the data member of the head node.
- The ubahtengah() function modifies the value of a node at a specified position in the list. It checks whether the position is within the valid range and updates the data member of the corresponding node.
- The ubahbelakang() function modifies the value of the last node in the list. It checks if the list is empty and updates the data member of the tail node.
- The clearlist() function deletes all nodes in the list, freeing the memory allocated for each node.
- The tampil() function displays the data stored in each node of the list by traversing the linked list and printing the data member of each node.
- The main() function is where the menu-driven program logic is implemented:
  - The init() function is called to initialize the list.
  - A do-while loop is used to repeatedly display the menu and process user input until the user chooses to exit.
  - The available menu options include inserting at the beginning and end, deleting from the beginning and end, displaying the list, clearing the list, and exiting the program.
  - Based on the user's menu choice, the corresponding functions are called to perform the desired operations.
  - The loop continues until the user chooses to exit.
- The program returns 0 to indicate successful execution.

### 025_LinkedListMenuStudent.cpp
The code is an implementation of a linked list program that allows users to input, add, delete, and display data in the list. Here's a breakdown of how the code works:
- The necessary header file, \<iostream>, is included.
- The Node struct is defined, representing a node in the linked list. It contains a string nama, an integer nim, and a pointer next to the next node.
- Global variables head, tail, bantu, newNode, del, pilih, and out are declared. These variables will be used to manage the linked list and user input.
- The inputList() function is defined to initialize the list. It prompts the user to enter a name and an integer, creates a new node with the provided data, and assigns it to the head pointer.
- The tambahDepan() function is defined to add a new node at the beginning of the list. It prompts the user to enter a name and an integer, creates a new node with the provided data, and updates the head pointer accordingly.
- The tambahBelakang() function is defined to add a new node at the end of the list. It prompts the user to enter a name and an integer, creates a new node with the provided data, and updates the tail pointer accordingly.
- The panjangList() function calculates the length of the list by traversing through the nodes and counting them. It returns the count.
- The tampil() function is defined to display the data stored in each node of the list. It traverses the linked list and prints the nama and nim values of each node.
- The hapusData() function is defined to delete a node from the list. It prompts the user to enter the position of the node they want to delete. Based on the provided position, it handles cases for deleting the first, middle, and last nodes of the list.
- The main() function is where the menu-driven program logic is implemented:
  - A menu label is defined to enable jumping to the menu section after performing an operation.
  - The program displays the menu options to the user.
  - The user is prompted to enter a choice.
  - Based on the choice, the corresponding functions are called to perform the desired operations.
  - After each operation, the program pauses and clears the screen before displaying the menu again.
  - The program continues executing until the user enters an invalid choice (default case), at which point it exits.

### 026_Stack.cpp
The code is an implementation of a stack program using an array. Here's a breakdown of how the code works:
- The necessary header file, \<iostream>, is included.
- The MAX constant is defined to represent the maximum size of the stack.
- The stack struct is defined, representing a stack. It contains two members: an integer top to keep track of the top element's index and an integer array data to store the stack elements.
- The initStack() function is defined to initialize the stack. It sets the top value to -1, indicating an empty stack.
- The isEmpty() function checks whether the stack is empty by checking if the top value is -1. It returns 1 if true (empty) and 0 if false (not empty).
- The isFull() function checks whether the stack is full by checking if the top value is equal to MAX - 1. It returns 1 if true (full) and 0 if false (not full).
- The push() function is defined to insert an element into the stack. It first checks if the stack is empty. If so, it increments the top value and assigns the data element at the top index to the provided data. If the stack is not empty, it performs the same steps. If the stack is full, it displays a message indicating that the stack is full.
- The pop() function is defined to remove the top element from the stack. It first checks if the stack is not empty. If so, it decrements the top value, effectively removing the top element. If the stack is empty, it displays a message indicating that the stack is empty.
- The top() function is defined to display the top element of the stack. It checks if the stack is not empty. If so, it displays the element at the top index. If the stack is empty, it displays a message indicating that the stack is empty.
- The display() function is defined to display all the elements in the stack. It iterates from the top element to the bottom element of the stack and displays each element.
- The clear() function is defined to clear the stack by setting the top value to -1, effectively emptying the stack.
- The main() function is where the menu-driven program logic is implemented:
  - The initStack() function is called to initialize the stack.
  - A do-while loop is used to repeatedly display the menu and perform operations until the user chooses to exit.
  - Inside the loop, the menu options are displayed to the user.
  - The user is prompted to enter a choice.
  - Based on the choice, the corresponding functions are called to perform the desired operations.
  - After each operation, the screen is cleared, and the loop continues until the user chooses to exit.
  - When the user chooses to exit (option 6), the loop ends, and the program terminates.

### 027_StackQueue.cpp
The code is an implementation of a queue program using an array. Here's a breakdown of how the code works:
- The necessary header file, \<iostream>, is included.
- The MAX constant is defined to represent the maximum size of the queue.
- The queue struct is defined, representing a queue. It contains three members: an integer array data to store the queue elements, and two integers head and tail to keep track of the front and rear indices of the queue.
- The create() function is defined to initialize the queue. It sets both head and tail values to -1, indicating an empty queue.
- The isEmpty() function checks whether the queue is empty by checking if the tail value is -1. It returns 1 if true (empty) and 0 if false (not empty).
- The isFull() function checks whether the queue is full by checking if the tail value is equal to MAX - 1. It returns 1 if true (full) and 0 if false (not full).
- The enqueue() function is defined to insert an element into the queue. It first checks if the queue is empty. If so, it sets both head and tail to 0 and assigns the data element at the tail index to the provided data. If the queue is not empty, it increments the tail value and assigns the data element at the new tail index to the provided data. If the queue is full, it displays a message indicating that the queue is full.
- The dequeue() function is defined to remove the front element from the queue. It first assigns the front element to a variable dq. It then shifts all elements in the queue to the left by one position, effectively removing the front element. Finally, it decrements the tail value and displays the removed element and a message indicating that the front of the queue has been removed. If the queue is empty, it displays a message indicating that the queue is empty.
- The clear() function is defined to clear the queue by setting both head and tail values to -1, effectively emptying the queue.
- The display() function is defined to display all the elements in the queue. It iterates from the front element to the rear element of the queue and displays each element.
- The main() function is where the menu-driven program logic is implemented:
  - The create() function is called to initialize the queue.
  - A do-while loop is used to repeatedly display the menu and perform operations until the user chooses to exit.
  - Inside the loop, the menu options are displayed to the user.
  - The user is prompted to enter a choice.
  - Based on the choice, the corresponding functions are called to perform the desired operations.
  - After each operation, the screen is cleared, and the loop continues until the user chooses to exit.
  - When the user chooses to exit (option 5), the loop ends, and the program terminates.

### 028_StackLinkedList.cpp
The code is an implementation of a stack program using a singly linked list. Here's how the code works:
- The necessary header file, \<iostream>, is included.
- The struct Node is defined to represent a node in the linked list. It has two members: data to store the data value and link to point to the next node in the list.
- The pointer top is initialized to NULL, indicating an empty stack.
- The function isEmpty() checks whether the stack is empty by checking if the top pointer is NULL. It returns 1 if true (empty) and 0 if false (not empty).
- The function push(int nilai) is defined to insert an element into the stack. It creates a new node (ptr), assigns the provided value (nilai) to the data member of the node, sets the link of the new node to the current top node, and updates the top pointer to point to the new node. It also displays a message indicating that the data has been inserted.
- The function pop() is defined to remove the top element from the stack. It first checks if the stack is empty. If it is, it displays a message indicating that the stack is empty. If the stack is not empty, it creates a temporary pointer (ptr) and sets it to the current top node. It updates the top pointer to point to the next node in the list. It displays a message indicating the value of the removed data, and finally, it deletes the temporary pointer.
- The function showTop() is defined to display the top element of the stack. It first checks if the stack is empty. If it is, it displays a message indicating that the stack is empty. If the stack is not empty, it displays the value of the data member of the top node.
- The function clearStack() is defined to clear the stack by deleting all the nodes in the linked list. It uses two pointers, bantu and hapus, to iterate through the linked list. It starts from the top node and deletes each node until the end of the list (bantu == NULL). Finally, it sets the top pointer to NULL and displays a message indicating that the stack has been cleared.
- The function displayStack() is defined to display all the elements in the stack. It iterates through the linked list, starting from the top node, and displays the value of each node's data member.
- The main() function is where the menu-driven program logic is implemented:
  - A do-while loop is used to repeatedly display the menu and perform operations until the user chooses to exit.
  - Inside the loop, the menu options are displayed to the user.
  - The user is prompted to enter a choice.
  - Based on the choice, the corresponding functions are called to perform the desired operations.
  - After each operation, the screen is cleared, and the loop continues until the user chooses to exit.
  - When the user chooses to exit (option 6), the loop ends, and the program terminates.

### 029_StackReversString.cpp
The code is an implementation of a program that reverses a given string using a stack. Here's how the code works:
- The necessary header files, \<iostream> and <string.h>, are included.
- The struct Tumpukan is defined to represent a stack. It has two members: atas to keep track of the top index of the stack and kalimat to store the characters of the string.
- The function masukan(char x) is defined to insert a character into the stack. It first checks if the stack is full (T.atas == max). If it is, it displays a message indicating that the stack is already full. If the stack is not full, it increments T.atas and assigns the provided character x to T.kalimat[T.atas].
- The function ambil() is defined to remove and return the top character from the stack. It first checks if the stack is empty (T.atas == 0). If it is, it displays a message indicating that the stack is empty and returns a space character ' '. If the stack is not empty, it assigns the top character T.kalimat[T.atas] to hasil, decrements T.atas, and returns hasil.
- In the main() function:
  - The variable kata is declared to store the input string.
  - The screen is cleared using system("cls").
  - The T.atas is initialized to 0 to indicate an empty stack.
  - The user is prompted to enter a string to be reversed using cout and gets(kata).
  - The screen is cleared again.
  - The original string is displayed using cout.
  - A loop is used to push each character of the string into the stack by calling the masukan() function.
  - Another loop is used to pop and display each character from the stack, effectively reversing the string.
  - The program terminates with return 0.

### 030_StackInfixPostfix.cpp
The code is an implementation of a program that converts an infix expression to postfix notation using a stack. Here's how the code works:
- The necessary header files, \<iostream> and \<stack>, are included.
- Three functions are defined: IsOperator(char c), IsOperand(char c), and precedence(char op). These functions are used to check if a character is an operator, operand, or to determine the precedence of an operator.
- The function eqlOrhigher(char op1, char op2) is defined to compare the precedence of two operators. It returns true if op1 has equal or higher precedence than op2, and false otherwise.
- The function convert(string infix) takes an infix expression as input and converts it to postfix notation. It uses a stack to perform the conversion. The function iterates through each character of the infix expression and applies the following rules:
  - If the character is a space, it is ignored.
  - If the character is an opening parenthesis '(', it is pushed onto the stack.
  - If the character is an operand, it is added to the postfix string.
  - If the character is an operator, the stack is checked. If there are operators with higher precedence on the stack, they are popped and added to the postfix string. Then, the current operator is pushed onto the stack.
  - If the character is a closing parenthesis ')', operators are popped from the stack and added to the postfix string until an opening parenthesis is encountered. The opening parenthesis is then popped from the stack.
- In the main() function:
  - Variables infix, postfix, and prefix are declared to store the input infix expression, the converted postfix expression, and an unused prefix expression, respectively.
  - A do-while loop is used to repeatedly prompt the user for input infix expressions and convert them to postfix notation.
  - Inside the loop, the user is prompted to enter an infix expression using cout and cin >> infix.
  - The convert() function is called to convert the infix expression to postfix notation, and the result is stored in the postfix variable.
  - The original infix expression and the converted postfix expression are displayed using cout.
  - The user is prompted to enter whether they want to input another infix expression.
  - The loop continues as long as the user enters 'y' to input another infix expression.
- The program terminates with return 0.

### 031_QueueArray.cpp
The code is an implementation of a program that simulates a queue using an array. Here's how the code works:
- The necessary header file, \<iostream>, is included.
- The constant MAX is defined to represent the maximum size of the queue.
- A structure queue is defined to represent the queue. It contains an array data to store the queue elements, and head and tail to represent the indices of the front and rear of the queue.
- The create() function initializes the queue by setting head and tail to -1.
- The isEmpty() function checks if the queue is empty by checking if tail is -1.
- The isFull() function checks if the queue is full by checking if tail is equal to MAX - 1.
- The enqueue(int data) function is used to insert an element into the queue. It first checks if the queue is empty. If it is, it sets head and tail to 0 and inserts the element at the tail index. If the queue is not full, it increments tail and inserts the element at the new tail index. If the queue is full, it displays a message indicating that the queue is already full.
- The dequeue() function is used to remove an element from the front of the queue. It first assigns the value of the element at the head index to a variable dq. Then it shifts all the elements in the queue to the left by one position, effectively removing the front element. Finally, it decrements tail and displays a message indicating that the front element has been removed.
- The clear() function is used to clear the queue by resetting head and tail to -1.
- The display() function is used to display the elements in the queue. It iterates from head to tail and displays each element.
- In the main() function:
  - Variables pil and data are declared to store the user's choice and the data to be enqueued, respectively.
  - The create() function is called to initialize the queue.
  - A do-while loop is used to repeatedly display a menu, get the user's choice, and perform the corresponding operation.
  - Inside the loop, the user is prompted to enter their choice using cout and cin >> pil.
  - Depending on the user's choice, the corresponding function (enqueue(), dequeue(), display(), or clear()) is called.
  - After each operation, the screen is cleared using system("cls"), and the loop continues until the user enters 5 to exit the program.
- The program terminates with return 0.

### 032_QueueLinkedList.cpp
The code is an implementation of a program that simulates a queue using a linked list. Here's how the code works:
- The necessary header file, \<iostream>, is included.
- A structure antrian is defined to represent each element of the queue. It contains an integer data and a pointer next to point to the next element in the queue.
- Global variables head, tail, baru, bantu, and hapus are declared. head and tail point to the front and rear of the queue, respectively. baru is used to create a new element. bantu and hapus are used for traversing and deleting elements in the queue.
- The hitungAntrian() function is used to count the number of elements in the queue. It iterates through the queue and increments a counter for each element.
- The isEmpty() function checks if the queue is empty by calling hitungAntrian() and checking if the count is zero.
- The enqueue(int data) function is used to insert an element into the queue. If the queue is empty, a new element is created and assigned to head and tail. If the queue is not empty, a new element is created and appended to the end of the queue, and tail is updated.
- The dequeue() function is used to remove an element from the front of the queue. If the queue is empty, a message is displayed. If the queue is not empty, the element pointed by head is removed by updating head and deleting the element.
- The display() function is used to display the elements in the queue. It checks if the queue is empty and, if not, iterates through the queue and prints each element.
- The clear() function is used to clear the queue. It checks if the queue is empty, and if not, it deletes each element in the queue by traversing through it.
- In the main() function:
  - Variables pil and data are declared to store the user's choice and the data to be enqueued, respectively.
  - A do-while loop is used to repeatedly display a menu, get the user's choice, and perform the corresponding operation.
  - Inside the loop, the user is prompted to enter their choice using cout and cin >> pil.
  - Depending on the user's choice, the corresponding function (enqueue(), dequeue(), display(), or clear()) is called.
  - After each operation, the screen is cleared using system("cls"), and the loop continues until the user enters 5 to exit the program.
- The program terminates with return 0.

### 033_QueueArrayDataManipulation.cpp
The code is an updated version of the previous code. It adds additional functionality to handle a queue of names and corresponding values (scores). Here's how the updated code works:
- The code includes the necessary header file, \<iostream>, and defines a constant MAX with a value of 5.
- A structure queue is defined to represent the queue. It contains two arrays, nama (for names) and nilai (for values/scores), as well as head and tail variables to keep track of the front and rear of the queue.
- The create() function initializes head and tail to -1, indicating an empty queue.
- The isEmpty() function checks if the queue is empty by checking if tail is -1.
- The isFull() function checks if the queue is full by comparing tail with MAX-1.
- The enqueue(string nama, int nilai) function is used to insert an element (name and value) into the queue. If the queue is empty, head and tail are set to 0, and the name and value are stored in the corresponding arrays. If the queue is not empty and not full, tail is incremented, and the name and value are stored at the new position. If the queue is full, a message is displayed.
- The dequeue() function is used to remove an element from the front of the queue. If the queue is empty, a message is displayed. If the queue is not empty, the elements in the arrays are shifted to the left, and tail is decremented. The name and value of the dequeued element are displayed.
- The display() function is used to display all the elements in the queue. It checks if the queue is empty and, if not, iterates through the arrays and prints each name and value.
- The jumlah() function calculates and displays the number of elements in the queue by iterating through the arrays and incrementing a counter.
- The ratarata() function calculates and displays the average value of the elements in the queue by summing the values and dividing by the number of elements.
- The jumlahtotal() function calculates and displays the total value of the elements in the queue by summing the values.
- The clear() function is used to clear the queue by resetting head and tail to -1.
- In the main() function:
  - Variables pil, nama, and nilai are declared to store the user's choice, name, and value, respectively.
  - A do-while loop is used to repeatedly display a menu, get the user's choice, and perform the corresponding operation.
  - Inside the loop, the user is prompted to enter their choice using cout and cin >> pil.
  - Depending on the user's choice, the corresponding function (enqueue(), dequeue(), display(), jumlah(), ratarata(), jumlahtotal(), or clear()) is called.
  - After each operation, the screen is cleared using system("cls"), and the loop continues until the user enters 8 to exit the program.
- The program terminates with return 0.

### 034_QueueArrayMeetAndGreet.cpp
The code is a program that simulates a queue for a personal meet and greet event. It allows users to enqueue (add) their names to the queue, dequeue (remove) the first person in the queue, and reset the queue.
Here's a breakdown of how the code works:
- The code includes the necessary header file, \<iostream>, and defines a constant MAX with a value of 100.
- A structure queue is defined to represent the queue. It contains two arrays, nama (for names) and no (for queue numbers), as well as head and tail variables to keep track of the front and rear of the queue.
- Variables no and nokel are declared and initialized to 0. no is used to assign a unique queue number to each person, and nokel keeps track of the number of people who have been dequeued.
- The create() function initializes head and tail to -1, indicating an empty queue.
- The isEmpty() function checks if the queue is empty by checking if tail is -1.
- The isFull() function checks if the queue is full by comparing tail with MAX-1.
- The enqueue(string nama) function is used to insert a person's name into the queue. If the queue is empty, head and tail are set to 0, and the name and queue number are stored in the corresponding arrays. If the queue is not empty and not full, tail is incremented, and the name and queue number are stored at the new position. If the queue is full, a message is displayed.
- The dequeue() function is used to remove the first person from the queue. If the queue is empty, a message is displayed. If the queue is not empty, the elements in the arrays are shifted to the left, tail is decremented, and nokel is incremented. The name and queue number of the dequeued person are displayed.
- The clear() function is used to clear the queue by resetting head, tail, no, and nokel to their initial values.
- In the main() function:
  - Variables menu and nama are declared to store the user's choice and name, respectively.
  - The create() function is called to initialize the queue.
  - A do-while loop is used to repeatedly display a menu, get the user's choice, and perform the corresponding operation.
  - Inside the loop, the user is prompted to enter their choice using cout and cin >> menu.
  - Depending on the user's choice, the corresponding function (enqueue(), dequeue(), or clear()) is called.
  - After each operation, the screen is cleared using system("cls"), and the loop continues until the user enters 4 to exit the program.
- The program terminates with return 0.

### 035_DoubleLinkedList.cpp
The code implements a doubly linked list in C++. Here's how the code works:
- The code defines a structure named Node that represents a node in the linked list. It contains an integer data to store the value of the node, and two pointers next and prev to point to the next and previous nodes in the list.
- Global variables head, tail, baru, bantu, bantu2, and hapus are declared to keep track of the head and tail of the list, and for other temporary operations.
- The init() function initializes the head and tail pointers to NULL, indicating an empty list.
- The isEmpty() function checks if the list is empty by verifying if both head and tail are NULL.
- The create(int input) function is used to create a new node with the given input value.
- The insertDepan(int input) function inserts a new node at the front of the list. It creates a new node using create(), and if the list is empty, sets both head and tail to the new node. Otherwise, it adjusts the pointers accordingly.
- The insertBelakang(int input) function inserts a new node at the end of the list. It creates a new node using create(), and if the list is empty, sets both head and tail to the new node. Otherwise, it adjusts the pointers accordingly.
- The countList() function counts the number of nodes in the list by traversing through the list and incrementing a counter variable.
- The insertTengah(int input, int posisi) function inserts a new node at the specified position in the list. It creates a new node using create(), and if the position is valid, it traverses the list to the desired position, adjusts the pointers, and inserts the new node.
- The hapusDepan() function removes the node at the front of the list. If the list is not empty, it adjusts the pointers and deletes the node.
- The hapusBelakang() function removes the node at the end of the list. If the list is not empty, it adjusts the pointers and deletes the node.
- The hapusTengah(int posisi) function removes the node at the specified position in the list. If the position is valid and the list is not empty, it traverses the list to the desired position, adjusts the pointers, and deletes the node.
- The ubahDepan(int input), ubahBelakang(int input), and ubahTengah(int input, int posisi) functions modify the value of the node at the front, end, and specified position in the list, respectively.
- The clearlist() function clears the entire list by traversing through the list and deleting each node.
- The tampil() function displays the values of all nodes in the list by traversing through the list and printing each node's value.
- In the main() function, a sequence of function calls is made to demonstrate the operations on the doubly linked list. Nodes are inserted at the front, end, and a specific position, nodes are removed from the front, end, and a specific position, and nodes are modified. The tampil() function is called after each operation to display the current state of the list.

### 036_DoubleLinkedListCircular.cpp
The code implements a double linked list with a circular structure. Here's an explanation of the functions in the code:
- init(): This function initializes the linked list by setting both the head and tail pointers to NULL. It indicates that the list is empty.
- isEmpty(): This function checks whether the linked list is empty or not. It returns 1 if both head and tail are NULL, indicating an empty list. Otherwise, it returns 0.
- create(string input): This function creates a new node with the given input data. It allocates memory for a new Node structure, assigns the input value to the data member of the new node, and sets both the next and prev pointers to NULL.
- insertDepan(string input): This function inserts a new node at the front of the linked list. It creates a new node using the create() function. If the list is empty (checked using isEmpty()), the new node becomes both the head and tail of the list. The prev and next pointers of the new node and the existing head and tail nodes are updated accordingly to form a circular structure. If the list is not empty, the new node is inserted at the front, and the necessary pointer updates are made.
- insertBelakang(string input): This function inserts a new node at the end of the linked list. It creates a new node using the create() function. If the list is empty (checked using isEmpty()), the new node becomes both the head and tail of the list. The prev and next pointers of the new node and the existing head and tail nodes are updated accordingly to form a circular structure. If the list is not empty, the new node is inserted at the end, and the necessary pointer updates are made.
- insertTengah(string input, int posisi): This function inserts a new node at the specified position in the linked list. It creates a new node using the create() function. If the list is empty (checked using isEmpty()), an appropriate message is displayed. If the list is not empty, it checks if the specified position is valid. If the position is 1, it displays a message because it is not a valid position for inserting in the middle. If the position is less than 1, it displays a message because it is out of range. Otherwise, it traverses the list to the position and inserts the new node by updating the appropriate next and prev pointers.
- hapusDepan(): This function removes the first node from the linked list. If the list is not empty (checked using isEmpty()), it assigns the head node to the hapus pointer. If the list has only one node (i.e., head is the same as tail), both head and tail are set to NULL because the list becomes empty. Otherwise, the head and tail pointers are updated, and the hapus node is deleted to free the memory.
- hapusBelakang(): This function removes the last node from the linked list. If the list is not empty (checked using isEmpty()), it assigns the tail node to the hapus pointer. If the list has only one node (i.e., head is the same as tail), both head and tail are set to NULL because the list becomes empty. Otherwise, the head and tail pointers are updated, and the hapus node is deleted to free the memory.
- hapusTengah(int posisi): This function removes a node from the specified position in the linked list. If the list is empty, an appropriate message is displayed. If the list is not empty, it checks if the specified position is valid. If the position is 1, it displays a message because it is not a valid position for removing from the middle. If the position is less than 1, it displays a message because it is out of range. Otherwise, it traverses the list to the position and removes the node by updating the appropriate next and prev pointers.
- clearList(): This function clears the entire linked list by deleting each node. If the list is not empty (checked using isEmpty()), it starts by assigning the head node to the hapus pointer. It then traverses the list using the bantu and hapus pointers, deleting each node until it reaches the head node again. Finally, it sets both head and tail to NULL to indicate an empty list.
- tampil(): This function displays the elements of the linked list. If the list is not empty (checked using isEmpty()), it starts by assigning the head node to the bantu pointer. It then traverses th

### 037_DoubleLinkedListCircularImplementation.cpp
The code is an implementation of a circular doubly linked list in C++. A circular doubly linked list is a data structure where each node contains two pointers, one pointing to the next node and another pointing to the previous node. The list is circular, meaning that the last node's next pointer points to the first node, and the first node's previous pointer points to the last node.
Let's go through the code step by step:
- The Node structure defines the structure of a node in the linked list. It has two data members: nama (name) and nilai (value). Additionally, it includes two pointers: next to point to the next node, and prev to point to the previous node.
- There are several global variables declared in the code:
  - head and tail are pointers to Node type and represent the first and last nodes of the circular doubly linked list, respectively.
  - baru, bantu, bantu2, and hapus are temporary pointers used in various list manipulation operations.
- The init() function initializes the linked list by setting both head and tail pointers to NULL. This indicates an empty list.
- The isEmpty() function checks whether the linked list is empty. It returns 1 if both head and tail are NULL, indicating an empty list. Otherwise, it returns 0.
- The create(string nama, int nilai) function is responsible for creating a new node with the given name and value. It dynamically allocates memory for the new node and assigns the provided values to its nama and nilai data members.
- The insertDepan(string nama, int nilai) function inserts a new node at the beginning of the linked list. It first creates a new node using the create() function. Then, it checks if the list is empty by calling isEmpty(). If the list is empty, the new node becomes the first node, and both head and tail are updated to point to the new node. If the list is not empty, the new node is inserted at the beginning. The next pointer of the new node is set to the current first node, and the prev pointer of the new node is set to the last node. The next and prev pointers of the neighboring nodes are updated accordingly.
- The insertTengah(string nama, int nilai, int posisi) function inserts a new node at the specified position in the linked list. It first creates a new node using the create() function. Then, it checks if the list is empty by calling isEmpty(). If the list is empty, it displays an appropriate message. If the position is 1, it also displays a message because it is not a valid position for inserting in the middle. If the position is less than 1, it displays a message because it is out of range. Otherwise, it traverses the list to the specified position and inserts the new node by updating the next and prev pointers of the neighboring nodes.
- The insertBelakang(string nama, int nilai) function inserts a new node at the end of the linked list. It first creates a new node using the create() function. Then, it checks if the list is empty by calling isEmpty(). If the list is empty, the new node becomes the first node, and both head and tail are updated to point to the new node. If the list is not empty, the new node is inserted at the end. The next pointer of the new node is set to the first node, and the prev pointer of the new node is set to the current last node. The next and prev pointers of the neighboring nodes are updated accordingly.
- The hapusDepan() function removes the first node from the linked list. It checks if the list is empty by calling isEmpty(). If the list is not empty, it updates the head and tail pointers accordingly and frees the memory allocated for the removed node.
- The hapusTengah(int posisi) function removes a node at the specified position from the linked list. It checks if the list is empty by calling isEmpty(). If the list is empty, it displays an appropriate message. If the position is 1, it calls hapusDepan() to remove the first node. If the position is less than 1, it displays a message because it is out of range. Otherwise, it traverses the list to the specified position and removes the node by updating the next and prev pointers of the neighboring nodes. The memory allocated for the removed node is freed.
- The hapusBelakang() function removes the last node from the linked list. It checks if the list is empty by calling isEmpty(). If the list is not empty, it updates the head and tail pointers accordingly and frees the memory allocated for the removed node.
- The display() function is used to print the contents of the linked list. It traverses the list starting from the head node and continues until it reaches the tail node. It prints the nama and nilai values of each node.
- The main() function is the entry point of the program. It first calls the init() function to initialize the linked list. Then, it presents a menu to the user, allowing them to choose various operations on the linked list, such as inserting nodes at different positions, removing nodes, and displaying the list. The user can choose to exit the program by entering '0'.

### 038_DoubleLinkedListImplementation.cpp
The code is an implementation of a circular doubly linked list in C++. It defines a struct called Node that represents a node in the linked list. Each node contains a nama (name) field of type string, a nilai (value) field of type int, and two pointers next and prev pointing to the next and previous nodes in the list, respectively.
- The code begins with the necessary header files and the using namespace std directive to simplify the code by avoiding the need to prepend std:: to standard library functions.
- The Node struct is defined, which represents a node in the circular doubly linked list. It has the following members:
  - string nama: Stores the name associated with the node.
  - int nilai: Stores the value associated with the node.
  - Node* next: Points to the next node in the list.
  - Node* prev: Points to the previous node in the list.
- Several pointers are declared: head, tail, baru, bantu, bantu2, and hapus. These pointers will be used to manipulate the linked list.
- The init() function is defined to initialize the head and tail pointers to NULL, indicating an empty list.
- The isEmpty() function checks if the list is empty by verifying if both head and tail are NULL. It returns 1 if the list is empty and 0 otherwise.
- The create(string nama, int nilai) function is used to create a new node. It takes the name and value as arguments, assigns them to the corresponding fields of the baru node, and sets the next and prev pointers to NULL.
- The insertDepan(string nama, int nilai) function inserts a new node at the beginning of the list. It first creates a new node using the create() function. If the list is empty (checked using isEmpty()), the new node becomes the head and tail of the list, and the next and prev pointers are appropriately set to maintain the circular nature of the list. If the list is not empty, the new node is inserted at the beginning by updating the pointers of the existing nodes and adjusting the head and tail pointers accordingly.
- The insertTengah(string nama, int nilai, int posisi) function inserts a new node at the specified position in the list. It first creates a new node using the create() function. If the list is empty, it displays an error message. If the specified position is the first position, it displays an error message as well. If the position is valid, it traverses the list to the node preceding the desired position, updates the pointers of the existing nodes, and inserts the new node in between.
- The insertBelakang(string nama, int nilai) function inserts a new node at the end of the list. It first creates a new node using the create() function. If the list is empty (checked using isEmpty()), the new node becomes the head and tail of the list, and the next and prev pointers are adjusted accordingly. If the list is not empty, the new node is inserted at the end by updating the pointers of the existing nodes and adjusting the head and tail pointers.
- The ubahDepan(string nama, int nilai) function updates the values of the first node in the list. If the list is not empty, it modifies the nama and nilai fields of the head node with the provided values. If the list is empty, it displays an error message.
- The ubahTengah(string nama, int nilai, int posisi) function updates the values of the node at the specified position in the list. If the list is not empty, it checks if the specified position is valid and traverses the list to the desired position. If the position is valid, it modifies the nama and nilai fields of the node with the provided values. If the list is empty or the position is invalid, it displays an error message.
- The ubahBelakang(string nama, int nilai) function updates the values of the last node in the list. If the list is not empty, it modifies the nama and nilai fields of the tail node with the provided values. If the list is empty, it displays an error message.
- The hapusDepan() function removes the first node from the list. If the list is not empty, it updates the pointers of the adjacent nodes and adjusts the head and tail pointers accordingly. If the list is empty, it displays an error message.
- The hapusTengah(int posisi) function removes the node at the specified position in the list. If the list is not empty, it checks if the specified position is valid and traverses the list to the desired position. If the position is valid, it updates the pointers of the adjacent nodes and adjusts the head and tail pointers accordingly. If the list is empty or the position is invalid, it displays an error message.
- The hapusBelakang() function removes the last node from the list. If the list is not empty, it updates the pointers of the adjacent nodes and adjusts the head and tail pointers accordingly. If the list is empty, it displays an error message.
- The tampil() function displays all the nodes in the list. If the list is not empty, it starts from the head and traverses the list, printing the name and value of each node. If the list is empty, it displays an appropriate message.
- The cari(string nama) function searches for a node with the given name in the list. If the list is not empty, it starts from the head and traverses the list, comparing the name of each node with the given name. If a match is found, it displays the position of the node. If no match is found or the list is empty, it displays an appropriate message.
- The clearList() function clears the entire list by deleting all nodes. It starts from the head and traverses the list, deleting each node and updating the next and prev pointers accordingly. Finally, it sets the head and tail pointers to NULL.
- The main() function provides a menu-driven interface for interacting with the linked list. It repeatedly displays a menu of options and prompts the user for input. Based on the chosen option, it calls the corresponding functions to perform the desired operation on the list. The program continues to prompt for user input until the user chooses to exit.

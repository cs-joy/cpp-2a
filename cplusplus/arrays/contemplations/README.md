# Contemplations

### Crux 00:
integers, a and b (obtained by the user) and will perform the division a/b, store the result in another integer c and show the result of the division using cout. In a similar way, extend the program to add, subtract, multiply, do modulo and power using integers a and b. Modify your program so that when it starts, it asks the user which type of calculation it should do, then asks for the 2 integers, then runs the user selected calculation and outputs the result in a user friendly formatted manner.

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/crux01.cc)

### Crux 01:
Create an array that can hold ten integers, and get input from user. Display those values on the screen, and then prompt the user for an integer. Search through the array, and count the number of times the item is found.

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/crux01.cc)

### Crux 02:
Write a program that asks for an index and a number. Then it includes the number at the indicated index of the array ={1,2,3,4,5,6} and moves a position forward (from u to u+1) each element after the selected index.

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/crux02.cpp)

### Crux 03:
Write a program that reverses a string and prints it on the screen.

### Precedent 00:
A Program to Store pre initilized value in three dimensional array and display it.

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/precedent.cxx)

### Precedent 00a:
A Program to Store value entered by user(take input from users) in three dimensional array and display it.

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/precedent00a.cxx)

### Precedent 01:
A Program to display the elements of One dimensional array by passing it to a function.
> Passing One-dimensional Array to a Function

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/precedent01.cpp)

### Precedent 01a:
A Program to display the elements of two dimensional array by passing it to a function.
> Passing Multidimensional Array to a Function

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/precedent01a.cpp)

### Crux 04:
Write a C++ program to rearrange the elements of a given array of integers in zig-zag fashion way.

### Crux 05:
Using two-dimensional arrays, write a function (and a corresponding program to test it) which multiplies an mxn matrix of integers by an nxr matrix of integers. Use global constant declarations before the main program to give test values for m, n and r. Example input/output might be:
```
	INPUT FIRST (2x2) MATRIX:
	Type in 2 values for row 1 separated by spaces: 3 4
	Type in 2 values for row 2 separated by spaces: 5 7
	INPUT SECOND (2x2) MATRIX:
	Type in 2 values for row 1 separated by spaces: 1 1
	Type in 2 values for row 2 separated by spaces: 2 2
	
	           3     4
	           5     7 
	TIMES
	           1     1
	           2     2 
	EQUALS
	           11    11
	           19    19
```

### Crux 06:
Write a function "no_repetitions(...)" which removes all repetitions of characters from a string. Test the function in a suitable main program, which should be able to reproduce the following input/output:
```
Type in a string: This string contains repeated characters
he string without repetitions is: This trngcoaepd
```

### Crux 07:
Adapt the function "selection_sort(...)" in the lecture notes into a single argument string function "string_sort(...)" which sorts the characters in a string alphabetically (but putting all upper-case letters before all lower-case letters). The function should leave the position of the sentinel character unchanged. Test the function in a suitable main program, which should be able to reproduce the following input/output:
```
Type in a string: Rob Miller
The sorted string is:  MRbeillor
```

### Crux 08:
Write a library of integer array functions with a header file "IntegerArray.h" and implementation file "IntegerArray.cpp", which contains the following functions:

- A function "input_array(a,n)" which allows the user to input values for the first n elements of the array a.
- A function "display_array(a,n)" which displays the values of the first n elements of the array a on the screen.
- A function "copy_array(a1,a2,n)" which copies the first n elements of a2 to the respective first n elements in a1.
- A function "standard_deviation(a,n)" which returns the standard deviation of the first n elements of a. (The function "average(a,n)" in the lecture notes may help. A formula for the standard deviation of n values is given in [Exercise Sheet 3, Question 3](https://www.doc.ic.ac.uk/~wjk/c++intro/RobMillerE3.html#Q3).)

Test the functions in a suitably defined main program.

### Crux 09:
Write a program which takes 2 arrays of 10 integers each, a and b. c is an array with 20 integers. The program should put into c the appending of b to a, the first 10 integers of c from array a, the latter 10 from b. Then the program should display c.

### Crux 10:
Write a program that search for a number in an int type array of length 10, using binary search. The program repeatedly asks the user to enter a number for searching unless the user press ‘N’ as a sentinel value.

### Crux 11:
Write a program that asks the user to type 10 integers of an array and an integer value V and an index value i between 0 and 9. The program must put the value V at the place i in the array, shifting each element right and dropping off the last element. The program must then write the final array.

### Crux 12:
Write a program that uses a “for” loop to count from 0-10 and show the numbers on the screen. In the same file, re-write this program without using a “for” loop.

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/crux12.cpp)


### Crux 13:
Write a program that asks the user to type 10 integers of an array and an integer value V. The program must search if the value V exists in the array and must remove the first occurrence of V, shifting each following element left and adding a zero at the end of the array. The program must then write the final array.

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/crux13.cpp)


### Crux 14:
Declare a two-dimensional array which can be used to store a yearly budget. Each row of the array corresponds to a particular budgeted item like rent, electric, etc. There are at most 15 items to be budgeted. Each column of the array corresponds to a month, January, February, etc. Of course there are 12 columns corresponding to the 12 months of the year. All the data to be placed in the array consists of real numbers.

### Crux 15:
a. After the final answer sheet is printed, draw an alternative visualization of memory for the array A as we did above for our lab scores example.
b. What value is stored in row index 2, column index 1?

c. Give the name of the location where the value 0 is stored?

### Crux 16:
Suppose we wish to read in the data for our students' scores but the file is organized differently. Instead of all of one student's labs appearing first, the file has all grades on lab 1 first, then all grades on lab 2, etc. How must the code above be changed to accommodate this new arrangement of data?

### Crux 17:
Copy the program [cla14a.cc](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/cs-mtsu-edu/cla14a.cc) and the data file [labscores.dat](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/cs-mtsu-edu/labscores.dat) to your account. This program contains declarations for the labScores array and contains a function which reads in data into this array from the file labscores.dat. Make sure that you understand the code included in the program.
Add a function to print the scores so that each student's labs appear on a separate line of output. Include a statement in your main program to call this function. Your output should be labeled as follows:

```
	Student 1:  80  90  70  100  60  90  85  78  93  80  70  98  89  94
	Student 2:  98  85 100   99  89  90  72   0  78  98 100  65   0  56
	Student 3:  85  60  25....
	.
	.
```   
Compile and run your program to make sure it is error free.

### Crux 18:
Add a function to your copy of cla14a.cc, say StudentAvg(), which finds and prints the lab average for each student in the class. A function prototype for this function is shown below. Activate this function from the main program. Compile and run your program.
```cpp
   void StudentAvg(int labScores [][MAX_LABS],  //IN:  Lab scores
                   int numStudents,             //IN:  # of students in the class
                   int numLabs)                 //IN:  # of labs recorded per student
```

### Crux 19:
Add a function to cla14a.cc, say labAvg(), which finds and prints the average score made on each individual lab. Activate this function from the the main program. Compile and run your program. Turn in a script log of a listing, compile, and run.

### ---------------------
### Crux 20:
Suppose A, B, C are arrays of integers of size M, N, and M + Nrespectively. The numbers in array A appear in ascending order whilethe numbers in array B appear in descending order. Write a userdefined function in C++ to produce third array C by merging arrays Aand B in ascending order. Use A, B and C as arguments in thefunction.

### Crux 21:
Suppose a one-dimensional array AR containing integers is arrangedin ascending order. Write a user-defined function in C++ to searchfor an integer from AR with the help of Binary search method,returning an integer 0 to show absence of the number and integer 1to show presence of the number in the array. Function should havethree parameters : (i) array AR (ii) the number to be searched and(iii) the number of elements N in the array.

### Crux 22:
P is one-dimensional array of integers. Write a C++ function toefficiently search for a data VAL from P. If VAL is present in the arraythen the function should return value 1 and 0 otherwise.

### Crux 23:
Write a menu driven C++ program with following option

a. Accept elements of an array
b. Display elements of an array
c. Sort the array using insertion sort method
d. Sort the array using selection sort method
e. Sort the array using bubble sort method

Write C++ functions for all options. The functions should have twoparameters name of the array and number of elements in thearray.

### Crux 25:
Write a C++ program to find the largest and smallest element of an array.

### Crux 26:
Write a C++ program to reverse the element of an integer 1-D array.

### Crux 27:
Write a C++ program to find the sum and average of onedimensional integer array.

### Crux 28:
Write a C++ program to swap first and last element of an integer 1-d array.

### -------------------
### Crux 29:
Write a C++ Program to implement Merge Sort using Divide and Conquer Algorithm

### Crux 30:
C++ Menu Driven Program for Stack Operations Using Arrays

### Crux 31:
C++ Program to Find Sum Above and Below of Main Diagonal Matrix

### Crux 32:
C++ Program to Print Lowerhalf and Upperhalf of Triangle Matrix

### Crux 33:
C++ Program to Find Sum of Diagonals of Matrix

### Crux 34:
C++ Program for Linear Search in Arrays

### Crux 34:
C++ Program for Binary Search in Arrays

### Crux 35:
C++ Program to Find Largest and Smallest Element of a Matrix

### Crux 36:
C++ Program to Remove Characters in String Except Alphabets

### Crux 37:
C++ Program to find Maximum or Largest number in array

### Crux 38:
C++ Program to enter 5 numbers & display first and last only

### Crux 39:
C++ Program To reverse an array elements entered by user

### Crux 40:
C++ Program to Sort an Array Elements in Ascending Order

### Crux 41:
C++ Program to Sort an Array Elements in Descending Order

### Crux 42:
C++ Program for Addition of two matrix

### Crux 43:
C++ Program to Find Duplicate Elements in Array

### Crux 44:
C++ Program to Find Sum of Elements of an Array

### Crux 45:
C++ Program to Reverse elements of an Array

### Crux 46:
C++ Program to Find Even & Odd Elements in Array

### Crux 47:
C++ Program to Delete element from Array

### Crux 48:
C++ program to Insert element at specific position in array

### Crux 49:
C++ Program to Pass Array in Function

### Crux 50:
C++ Program for Three Dimensional (3D) Array

### Crux 51:
C++ Program for Two Dimensional Array

### Crux 52:
C++ Program to Delete Element from Array

### Crux 53:
C++ Program to Find Smallest Element in Array

### Crux 54:
C++ Program to Find Largest Element in Array

### Crux 55:
C++Program for One Dimensional (1-D) Array

### Crux 56:
C++ Program to Calculate Average of elements in an Arrays

### Crux 57:
C++ Program to Access Elements of an Array Using Pointer

### Crux 58:
C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays

### Crux 59:
C++ Program to Find Transpose of a Matrix

### Crux 60:
C++ Program to Subtract Two Matrices

### Crux 61:
C++ Program for Quick Sort using arrays

### Crux 62:
C++ Program for Shell Sort using Arrays

### Crux 63:
C++ Program for Union of Two Sorted Arrays

### Crux 64:
C++ Program for Insertion Sort using Array

### Crux 65:
C++ Program for Selection Sort using Arrays

### ------------
### Crux 66:
Write a program to print sum, average of all numbers, smallest and largest element of an array.

### Crux 67:
If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60], your program should be able to find that the subarray lies between the indexes 3 and 8.

### Crux 68:
Consider an integer array, the number of elements in which is determined by the user. The elements are also taken as input from the user. Write a program to find those pair of elements that has the maximum and minimum difference among all element pairs.

### Crux 69:
Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays. E.g.-
INITIAL array :
```
58	24	13	15	63	9	8	81	1	78
```
After spliting :
```
58	24	13	15	63
9	8	81	1	78
```

### Crux 70:
Write a program to check if elements of an array are same or not it read from front or back. E.g.-
```
2	3	15	15	3	2
```

### Crux 71:
Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.

### Crux 72:
Take 20 integer inputs from user and print the following:
- number of positive numbers
- number of negative numbers
- number of odd numbers
- number of even numbers
- number of 0.

### Crux 73:
Take an array of length n where all the numbers are nonnegative and unique. Find the element in the array possessing the highest value. Split the element into two parts where first part contains the next highest value in the array and second part hold the required additive entity to get the highest value. Print the array where the highest value get splitted into those two parts.
```
Sample input: 4 8 6 3 2
Sample output: 4 6 2 6 3 2
```

### Crux 74:
Write a program to shift every element of an array to circularly right. E.g.-
```
INPUT : 1 2 3 4 5
OUTPUT : 5 1 2 3 4
```

### Crux 75:
Initialize a 2D array of 3*3 matrix. E.g.-
```
1	2	3
4	5	6
7	8	9
```
Check if the matrix is symmetric or not.

### Crux 76:
Sorting refers to arranging data in a particular format. Sort an array of integers in ascending order. One of the algorithm is selection sort. Use below explanation of selection sort to do this.
INITIAL ARRAY :
```2	3	1	45	15```
First iteration : Compare every element after first element with first element and if it is larger then swap. In first iteration, 2 is larger than 1. So, swap it.
```1	3	2	45	15```
Second iteration : Compare every element after second element with second element and if it is larger then swap. In second iteration, 3 is larger than 2. So, swap it.
```1	2	3	45	15```
Third iteration : Nothing will swap as 3 is smaller than every element after it.
```1	2	3	45	15```
Fourth iteration : Compare every element after fourth element with fourth element and if it is larger then swap. In fourth iteration, 45 is larger than 15. So, swap it.
```1	2	3	15	45```

### Crux 77:
Input any number. Find the sum of the digits of the number using a recursive function.

## Crux 78:
Pass a 2D array to function and access all its elements.

### Crux 79:
Write a program to add and multiply two 3x3 matrices.

### Crux 80:
Given two arrays of integers A and B of sizes M and N respectively. Write a function named MIX () with four arguments, which will produce a third array named C. such that the following sequence is followed.
- All even numbers of A from left to right are copied into C from left to right.
- All odd numbers of A from left to right are copied into C from right to left.
- All even numbers of B from left to right are copied into C from left to right.
- All old numbers of B from left to right are copied into C from right to left.
- A, B and C are passed as arguments to MIX (). e.g., A is {3, 2, 1, 7, 6, 3} and B is {9, 3, 5, 6, 2, 8, 10} the resultant array C is {2, 6, 6, 2, 8, 10, 5, 3, 9, 3, 7, 1, 3}

### Crux 81:
Suppose X. Y, Z are arrays of integers of size M, N, and M + N respectively. The numbers in array X and Y appear in descending order. Write a user-defined function in C++ to produce third array Z by merging arrays X and Y in descending order.

### Crux 82:
Suppose A, B, C are arrays of integers of size M, N, and M + N respectively. The numbers in array A appear in ascending order while the numbers in array B appear in descending order. Write a user defined function in C++ to produce third array C by merging arrays A and B in ascending order. Use A, B and C as arguments in the function.

### Crux 83:
Suppose a one-dimensional array AR containing integers is arranged in ascending order. Write a user-defined function in C++ to search for an integer from AR with the help of Binary search method, returning an integer 0 to show absence of the number and integer 1 to show presence of the number in the array. Function should have three parameters : (i) array AR (ii) the number to be searched and (iii) the number of elements N in the array.

### Crux 84:
P is one-dimensional array of integers. Write a C++ function to efficiently search for a data VAL from P. If VAL is present in the array then the function should return value 1 and 0 otherwise.

### Crux 85:
Write a menu driven C++ program with following option:

a. Accept elements of an array

b. Display elements of an array

c. Sort the array using insertion sort method

d. Sort the array using selection sort method

e. Sort the array using bubble sort method

Write C++ functions for all options. The functions should have two parameters name of the array and number of elements in the array.

### Crux 86:
Write a Program to find the union of two sorted arrays

### Crux 87:
Write a Program to insert an element in an array at a specific position

### Crux 88:
Write a Program to Calculate Average of Multiple Numbers Using Arrays

### Crux 89:
Find and print the summation of each even row in a 10x10 array of type float. 

### Crux 90:
Find and print the summation of each odd column in a 10x10 array of type integer. 

### Crux 91:
Find and print the summation of the elements that are under the secondary diagonal in a matrix of size 10x10 of type float.

### Crux 92:
Find and print the summation of the elements that are above the secondary diagonal in a matrix of size 10x10 of type float.

### Crux 93:
Find  and  print  the  summation  of  the  elements  that  are  under  the  main diagonal in a matrix of size 10x10 of type integer. 

### Crux 94:
Find  and  print  the  summation  of  the  elements  that  are  above  the  main diagonal in a matrix of size 10x10 of type integer. 

### Crux 95:
Find and print the summation of each row of 7x5 array of type integer.

### Crux 96:
Find and print the summation of each column of 7x5 array of type integer.

### Crux 97:
Find and print the summation of the secondary diagonal of a matrix of size 10x10 of type float. 

### Crux 98:
Find and print the summation of the main diagonal of a matrix of size 10x10 of type integer. 

### Crux 99:
Write a C++ program to declare a 2D array of type float and of size 30 rows and 10 columns. Array elements must be entered from keyboard. Then the program finds and prints the summation of each row on the screen.

### Crux 100:
Every element of a string array is a reference to remember that a program can declare arrays of most data types output values for each array.

### Crux 101:
Declaring an array and Using a Loop to Initialize the array’s elements:

- The program below declares five-element integer array n .  
- Lines 6–9 use a for statement to initialize the array elements to zeros.  
- Arrays are not implicitly initialized to zero.  
- The first  output statement displays the  column headings  for the columns printed in the subsequent for statement, which prints the array in tabular format.  
- Remember  that  “\t”  prints  8  spaces  and  we  used  it  here  for  formatting purposes. 

### Crux 102:
Write a program to Maximize sum of consecutive differences in a circular array

### Crux 103:
Write a program to Minimum operations to make GCD of array a multiple of k

### Crux 104:
Write a program to Find the Largest lexicographic array with at most K consecutive swaps

### Crux 105:
write a program the smallest subset with sum greater than sum of all other elements

### Crux 106:
Write a program to find out-

- Minimum Product Subset of an array
- Maximum Product Subset of an array

### Crux 107:
Write a program to Minimum number of operations to make GCD of an array K

### Crux 108:
Write a program to Minimum number of increment or decrement (by 1) operations to make array in increasing order

### Crux 109:
Write a program to Implementing two stacks in one array

### Crux 110:
Write a program to Find index such that sum of left sub-array = right sub-array (Equilibrium Index) 


### References:
- [cplusplus](https://www.cplusplus.com/doc/tutorial/arrays/)
- [wikipedia](https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Static_arrays)
- [RobMiller](https://www.doc.ic.ac.uk/~wjk/c++intro/RobMillerE6.html)
- [w3resources](https://www.w3resource.com/cpp-exercises/array/index.php)
- [erlerobotics](https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/arrays_and_strings/exercises_arrays.html)
- [cs.mtsu](https://www.cs.mtsu.edu/~cs1170/manual/lab14/lab14.html)
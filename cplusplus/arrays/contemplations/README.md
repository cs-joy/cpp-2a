# Contemplations

### Crux 00:
integers, a and b (obtained by the user) and will perform the division a/b, store the result in another integer c and show the result of the division using cout. In a similar way, extend the program to add, subtract, multiply, do modulo and power using integers a and b. Modify your program so that when it starts, it asks the user which type of calculation it should do, then asks for the 2 integers, then runs the user selected calculation and outputs the result in a user friendly formatted manner.

[Solution](https://github.com/cs-joy/cpp-2a/blob/main/cplusplus/arrays/contemplations/crux01.cc)

### Crux 01:
Create an array that can hold ten integers, and get input from user. Display those values on the screen, and then prompt the user for an integer. Search through the array, and count the number of times the item is found.

### Crux 02:
Write a program that asks for an index and a number. Then it includes the number at the indicated index of the array ={1,2,3,4,5,6} and moves a position forward (from u to u+1) each element after the selected index.

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

### Crux 13:
Write a program that asks the user to type 10 integers of an array and an integer value V. The program must search if the value V exists in the array and must remove the first occurrence of V, shifting each following element left and adding a zero at the end of the array. The program must then write the final array.

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




### References:
- [cplusplus](https://www.cplusplus.com/doc/tutorial/arrays/)
- [wikipedia](https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Static_arrays)
- [RobMiller](https://www.doc.ic.ac.uk/~wjk/c++intro/RobMillerE6.html)
- [w3resources](https://www.w3resource.com/cpp-exercises/array/index.php)
- [erlerobotics](https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/arrays_and_strings/exercises_arrays.html)
- [cs.mtsu](https://www.cs.mtsu.edu/~cs1170/manual/lab14/lab14.html)
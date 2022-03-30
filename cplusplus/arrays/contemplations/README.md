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

### Crux 04:
Write a C++ program to rearrange the elements of a given array of integers in zig-zag fashion way.

### Crux 05:
Using two-dimensional arrays, write a function (and a corresponding program to test it) which multiplies an mxn matrix of integers by an nxr matrix of integers. Use global constant declarations before the main program to give test values for m, n and r.

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
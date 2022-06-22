# Variables
Variables are containers for storing data values. There are different types of variables (defined with different keywords), for example:

- int - stores integers (whole numbers), without decimals, such as 123 or -123
- double - stores floating point numbers, with decimals, such as 19.99 or -19.99
- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- string - stores text, such as "Hello World". String values are surrounded by double quotes
- bool - stores values with two states: true or false


### Declaring (Creating) Variables
To create a variable, specify the type and assign it a value:

Syntax
```
type variableName = value;
```
Where type is one of C++ types (such as `int`), and variableName is the name of the variable (such as x or myName). The equal sign is used to assign values to the variable.

To create a variable that should store a number, look at the following example:

Example
Create a variable called myNum of type int and assign it the value 15:
```cpp
int myNum = 15;
cout << myNum;
```

You can also declare a variable without assigning the value, and assign the value later:

Example
```cp
int myNum;
myNum = 15;
cout << myNum;
```

Note that if you assign a new value to an existing variable, it will overwrite the previous value:

Example
```cp
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10
```

### Other Types
A demonstration of other data types:

Example
```cp
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
```
For more to check [Data Types](https://www.w3schools.com/cpp/cpp_data_types.asp)

### Display Variables
The cout object is used together with the `<<` operator to display variables.

To combine both text and a variable, separate them with the << operator:

Example
```cp
int myAge = 35;
cout << "I am " << myAge << " years old.";
```

### Add Variables Together
To add a variable to another variable, you can use the + operator:

Example
```cp
int x = 5;
int y = 6;
int sum = x + y;
cout << sum;
```









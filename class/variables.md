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


## Declare Multiple Variables
### Declare Many Variables
To declare more than one variable of the same type, use a comma-separated list:

Example\
```cp
int x = 5, y = 6, z = 50;
cout << x + y + z;
```
### One Value to Multiple Variables
You can also assign the same value to multiple variables in one line:

Example
```cp
int x, y, z;
x = y = z = 50;
cout << x + y + z;
```

# Identifiers
All C++ variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

> Note: It is recommended to use descriptive names in order to create understandable and maintainable code:

Example
```cp
// Good
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```
The general rules for naming variables are:

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (`_`)
- Names are case sensitive (`myVar` and `myvar` are different variables)
- Names cannot contain whitespaces or special characters like `!, #, %,` etc.
- Reserved words (like C++ keywords, such as `int`) cannot be used as names



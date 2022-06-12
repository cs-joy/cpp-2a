# swot-cpp2a
Learn C++ Programming Language

### Compiled - Linux(Ubuntu @18.04)
> g++ version - @7.5.0

# C++
C++ (/ˌsiːˌplʌsˈplʌs/) is a general-purpose programming language created by Danish computer scientist Bjarne Stroustrup as an extension of the C programming language, or "C with Classes". The language has expanded significantly over time, and modern C++ now has object-oriented, generic, and functional features in addition to facilities for low-level memory manipulation. It is almost always implemented as a compiled language, and many vendors provide C++ compilers, including the Free Software Foundation, LLVM, Microsoft, Intel, Oracle, and IBM, so it is available on many platforms.

C++ was designed with an orientation toward systems programming and embedded, resource-constrained software and large systems, with performance, efficiency, and flexibility of use as its design highlights. C++ has also been found useful in many other contexts, with key strengths being software infrastructure and resource-constrained applications, including desktop applications, video games, servers (e.g. e-commerce, web search, or databases), and performance-critical applications (e.g. telephone switches or space probes).

C++ is standardized by the International Organization for Standardization (ISO), with the latest standard version ratified and published by ISO in December 2020 as ISO/IEC 14882:2020 (informally known as C++20). The C++ programming language was initially standardized in 1998 as ISO/IEC 14882:1998, which was then amended by the C++03, C++11, C++14, and C++17 standards. The current C++20 standard supersedes these with new features and an enlarged standard library. Before the initial standardization in 1998, C++ was developed by Stroustrup at Bell Labs since 1979 as an extension of the C language; he wanted an efficient and flexible language similar to C that also provided high-level features for program organization.[14] Since 2012, C++ has been on a three-year release schedule[15] with C++23 as the next planned standard.


## History
In 1979, Bjarne Stroustrup, a Danish computer scientist, began work on "C with Classes", the predecessor to C++. The motivation for creating a new language originated from Stroustrup's experience in programming for his PhD thesis. Stroustrup found that Simula had features that were very helpful for large software development, but the language was too slow for practical use, while BCPL was fast but too low-level to be suitable for large software development. When Stroustrup started working in AT&T Bell Labs, he had the problem of analyzing the UNIX kernel with respect to distributed computing. Remembering his PhD experience, Stroustrup set out to enhance the C language with Simula-like features. C was chosen because it was general-purpose, fast, portable and widely used. As well as C and Simula's influences, other languages also influenced this new language, including ALGOL 68, Ada, CLU and ML.

Initially, Stroustrup's "C with Classes" added features to the C compiler, Cpre, including classes, derived classes, strong typing, inlining and default arguments.

In 1982, Stroustrup started to develop a successor to C with Classes, which he named "C++" (++ being the increment operator in C) after going through several other names. New features were added, including virtual functions, function name and operator overloading, references, constants, type-safe free-store memory allocation (new/delete), improved type checking, and BCPL style single-line comments with two forward slashes (//). Furthermore, Stroustrup developed a new, standalone compiler for C++, Cfront.

In 1984, Stroustrup implemented the first stream input/output library. The idea of providing an output operator rather than a named output function was suggested by Doug McIlroy[1] (who had previously suggested Unix pipes).

In 1985, the first edition of The C++ Programming Language was released, which became the definitive reference for the language, as there was not yet an official standard.[20] The first commercial implementation of C++ was released in October of the same year.[17]

In 1989, C++ 2.0 was released, followed by the updated second edition of The C++ Programming Language in 1991.[21] New features in 2.0 included multiple inheritance, abstract classes, static member functions, const member functions, and protected members. In 1990, The Annotated C++ Reference Manual was published. This work became the basis for the future standard. Later feature additions included templates, exceptions, namespaces, new casts, and a Boolean type.

In 1998, C++98 was released, standardizing the language, and a minor update (C++03) was released in 2003.

After C++98, C++ evolved relatively slowly until, in 2011, the C++11 standard was released, adding numerous new features, enlarging the standard library further, and providing more facilities to C++ programmers. After a minor C++14 update released in December 2014, various new additions were introduced in C++17. After becoming finalized in February 2020, a draft of the C++20 standard was approved on 4 September 2020 and officially published on 15 December 2020.

On January 3, 2018, Stroustrup was announced as the 2018 winner of the Charles Stark Draper Prize for Engineering, "for conceptualizing and developing the C++ programming language".

As of 2022 C++ ranked fourth on the TIOBE index, a measure of the popularity of programming languages, after Python, C and Java.

### Etymology
According to Stroustrup, "the name signifies the evolutionary nature of the changes from C". This name is credited to Rick Mascitti (mid-1983) and was first used in December 1983. When Mascitti was questioned informally in 1992 about the naming, he indicated that it was given in a tongue-in-cheek spirit. The name comes from C's ++ operator (which increments the value of a variable) and a common naming convention of using "+" to indicate an enhanced computer program.

During C++'s development period, the language had been referred to as "new C" and "C with Classes" before acquiring its final name.

### Philosophy
Throughout C++'s life, its development and evolution has been guided by a set of principles:

- It must be driven by actual problems and its features should be immediately useful in real world programs.
- Every feature should be implementable (with a reasonably obvious way to do so).
- Programmers should be free to pick their own programming style, and that style should be fully supported by C++.
- Allowing a useful feature is more important than preventing every possible misuse of C++.
- It should provide facilities for organising programs into separate, well-defined parts, and provide facilities for combining separately developed parts.
- No implicit violations of the type system (but allow explicit violations; that is, those explicitly requested by the programmer).
- User-created types need to have the same support and performance as built-in types.
- Unused features should not negatively impact created executables (e.g. in lower performance).
- There should be no language beneath C++ (except assembly language).
- C++ should work alongside other existing programming languages, rather than fostering its own separate and incompatible programming environment.
- If the programmer's intent is unknown, allow the programmer to specify it by providing manual control.

## Language
The C++ language has two main components: a direct mapping of hardware features provided primarily by the C subset, and zero-overhead abstractions based on those mappings. Stroustrup describes C++ as "a light-weight abstraction programming language [designed] for building and using efficient and elegant abstractions";[11] and "offering both hardware access and abstraction is the basis of C++. Doing it efficiently is what distinguishes it from other languages."[58]

C++ inherits most of C's syntax. The following is Bjarne Stroustrup's version of the Hello world program that uses the C++ Standard Library stream facility to write a message to standard output:
```c++
#include <iostream>

int main()
{
    std::cout << "Hello, world!\n";
}
```
### Object storage
As in C, C++ supports four types of memory management: static storage duration objects, thread storage duration objects, automatic storage duration objects, and dynamic storage duration objects.

### Static storage duration objects
Static storage duration objects are created before main() is entered (see exceptions below) and destroyed in reverse order of creation after main() exits. The exact order of creation is not specified by the standard (though there are some rules defined below) to allow implementations some freedom in how to organize their implementation. More formally, objects of this type have a lifespan that "shall last for the duration of the program".[62]

Static storage duration objects are initialized in two phases. First, "static initialization" is performed, and only after all static initialization is performed, "dynamic initialization" is performed. In static initialization, all objects are first initialized with zeros; after that, all objects that have a constant initialization phase are initialized with the constant expression (i.e. variables initialized with a literal or constexpr). Though it is not specified in the standard, the static initialization phase can be completed at compile time and saved in the data partition of the executable. Dynamic initialization involves all object initialization done via a constructor or function call (unless the function is marked with constexpr, in C++11). The dynamic initialization order is defined as the order of declaration within the compilation unit (i.e. the same file). No guarantees are provided about the order of initialization between compilation units.

### Thread storage duration objects
Variables of this type are very similar to static storage duration objects. The main difference is the creation time is just prior to thread creation and destruction is done after the thread has been joined.

### Automatic storage duration objects
The most common variable types in C++ are local variables inside a function or block, and temporary variables. The common feature about automatic variables is that they have a lifetime that is limited to the scope of the variable. They are created and potentially initialized at the point of declaration (see below for details) and destroyed in the reverse order of creation when the scope is left. This is implemented by allocation on the stack.

Local variables are created as the point of execution passes the declaration point. If the variable has a constructor or initializer this is used to define the initial state of the object. Local variables are destroyed when the local block or function that they are declared in is closed. C++ destructors for local variables are called at the end of the object lifetime, allowing a discipline for automatic resource management termed RAII, which is widely used in C++.

Member variables are created when the parent object is created. Array members are initialized from 0 to the last member of the array in order. Member variables are destroyed when the parent object is destroyed in the reverse order of creation. i.e. If the parent is an "automatic object" then it will be destroyed when it goes out of scope which triggers the destruction of all its members.

Temporary variables are created as the result of expression evaluation and are destroyed when the statement containing the expression has been fully evaluated (usually at the ; at the end of a statement).

### Dynamic storage duration objects
Main article: new and delete (C++)
  
These objects have a dynamic lifespan and can be created directly with a call to new and destroyed explicitly with a call to delete.[65] C++ also supports malloc and free, from C, but these are not compatible with new and delete. Use of new returns an address to the allocated memory. The C++ Core Guidelines advise against using new directly for creating dynamic objects in favor of smart pointers through make_unique<T> for single ownership and make_shared<T> for reference-counted multiple ownership,[66] which were introduced in C++11.

### Templates
See also: Template metaprogramming and Generic programming
  
C++ templates enable generic programming. C++ supports function, class, alias, and variable templates. Templates may be parameterized by types, compile-time constants, and other templates. Templates are implemented by instantiation at compile-time. To instantiate a template, compilers substitute specific arguments for a template's parameters to generate a concrete function or class instance. Some substitutions are not possible; these are eliminated by an overload resolution policy described by the phrase "Substitution failure is not an error" (SFINAE). Templates are a powerful tool that can be used for generic programming, template metaprogramming, and code optimization, but this power implies a cost. Template use may increase code size, because each template instantiation produces a copy of the template code: one for each set of template arguments, however, this is the same or smaller amount of code that would be generated if the code was written by hand.[67] This is in contrast to run-time generics seen in other languages (e.g., Java) where at compile-time the type is erased and a single template body is preserved.

Templates are different from macros: while both of these compile-time language features enable conditional compilation, templates are not restricted to lexical substitution. Templates are aware of the semantics and type system of their companion language, as well as all compile-time type definitions, and can perform high-level operations including programmatic flow control based on evaluation of strictly type-checked parameters. Macros are capable of conditional control over compilation based on predetermined criteria, but cannot instantiate new types, recurse, or perform type evaluation and in effect are limited to pre-compilation text-substitution and text-inclusion/exclusion. In other words, macros can control compilation flow based on pre-defined symbols but cannot, unlike templates, independently instantiate new symbols. Templates are a tool for static polymorphism (see below) and generic programming.

In addition, templates are a compile-time mechanism in C++ that is Turing-complete, meaning that any computation expressible by a computer program can be computed, in some form, by a template metaprogram prior to runtime.

In summary, a template is a compile-time parameterized function or class written without knowledge of the specific arguments used to instantiate it. After instantiation, the resulting code is equivalent to code written specifically for the passed arguments. In this manner, templates provide a way to decouple generic, broadly applicable aspects of functions and classes (encoded in templates) from specific aspects (encoded in template parameters) without sacrificing performance due to abstraction.

### Objects
Main article: C++ classes
  
C++ introduces object-oriented programming (OOP) features to C. It offers classes, which provide the four features commonly present in OOP (and some non-OOP) languages: abstraction, encapsulation, inheritance, and polymorphism. One distinguishing feature of C++ classes compared to classes in other programming languages is support for deterministic destructors, which in turn provide support for the Resource Acquisition is Initialization (RAII) concept.

### Encapsulation
Encapsulation is the hiding of information to ensure that data structures and operators are used as intended and to make the usage model more obvious to the developer. C++ provides the ability to define classes and functions as its primary encapsulation mechanisms. Within a class, members can be declared as either public, protected, or private to explicitly enforce encapsulation. A public member of the class is accessible to any function. A private member is accessible only to functions that are members of that class and to functions and classes explicitly granted access permission by the class ("friends"). A protected member is accessible to members of classes that inherit from the class in addition to the class itself and any friends.

The object-oriented principle ensures the encapsulation of all and only the functions that access the internal representation of a type. C++ supports this principle via member functions and friend functions, but it does not enforce it. Programmers can declare parts or all of the representation of a type to be public, and they are allowed to make public entities not part of the representation of a type. Therefore, C++ supports not just object-oriented programming, but other decomposition paradigms such as modular programming.

It is generally considered good practice to make all data private or protected, and to make public only those functions that are part of a minimal interface for users of the class. This can hide the details of data implementation, allowing the designer to later fundamentally change the implementation without changing the interface in any way.[68][69]

### Inheritance
Inheritance allows one data type to acquire properties of other data types. Inheritance from a base class may be declared as public, protected, or private. This access specifier determines whether unrelated and derived classes can access the inherited public and protected members of the base class. Only public inheritance corresponds to what is usually meant by "inheritance". The other two forms are much less frequently used. If the access specifier is omitted, a "class" inherits privately, while a "struct" inherits publicly. Base classes may be declared as virtual; this is called virtual inheritance. Virtual inheritance ensures that only one instance of a base class exists in the inheritance graph, avoiding some of the ambiguity problems of multiple inheritance.

Multiple inheritance is a C++ feature allowing a class to be derived from more than one base class; this allows for more elaborate inheritance relationships. For example, a "Flying Cat" class can inherit from both "Cat" and "Flying Mammal". Some other languages, such as C# or Java, accomplish something similar (although more limited) by allowing inheritance of multiple interfaces while restricting the number of base classes to one (interfaces, unlike classes, provide only declarations of member functions, no implementation or member data). An interface as in C# and Java can be defined in C++ as a class containing only pure virtual functions, often known as an abstract base class or "ABC". The member functions of such an abstract base class are normally explicitly defined in the derived class, not inherited implicitly. C++ virtual inheritance exhibits an ambiguity resolution feature called dominance.

## Operators and operator overloading
C++ provides more than 35 operators, covering basic arithmetic, bit manipulation, indirection, comparisons, logical operations and others. Almost all operators can be overloaded for user-defined types, with a few notable exceptions such as member access (. and .*) as well as the conditional operator. The rich set of overloadable operators is central to making user-defined types in C++ seem like built-in types.

Overloadable operators are also an essential part of many advanced C++ programming techniques, such as smart pointers. Overloading an operator does not change the precedence of calculations involving the operator, nor does it change the number of operands that the operator uses (any operand may however be ignored by the operator, though it will be evaluated prior to execution). Overloaded "&&" and "||" operators lose their short-circuit evaluation property.

### Polymorphism
See also: Polymorphism (computer science)

Polymorphism enables one common interface for many implementations, and for objects to act differently under different circumstances.

C++ supports several kinds of static (resolved at compile-time) and dynamic (resolved at run-time) polymorphisms, supported by the language features described above. Compile-time polymorphism does not allow for certain run-time decisions, while runtime polymorphism typically incurs a performance penalty.

#### Static polymorphism
See also: Parametric polymorphism and ad hoc polymorphism
Function overloading allows programs to declare multiple functions having the same name but with different arguments (i.e. ad hoc polymorphism). The functions are distinguished by the number or types of their formal parameters. Thus, the same function name can refer to different functions depending on the context in which it is used. The type returned by the function is not used to distinguish overloaded functions and differing return types would result in a compile-time error message.

When declaring a function, a programmer can specify for one or more parameters a default value. Doing so allows the parameters with defaults to optionally be omitted when the function is called, in which case the default arguments will be used. When a function is called with fewer arguments than there are declared parameters, explicit arguments are matched to parameters in left-to-right order, with any unmatched parameters at the end of the parameter list being assigned their default arguments. In many cases, specifying default arguments in a single function declaration is preferable to providing overloaded function definitions with different numbers of parameters.

Templates in C++ provide a sophisticated mechanism for writing generic, polymorphic code (i.e. parametric polymorphism). In particular, through the curiously recurring template pattern, it's possible to implement a form of static polymorphism that closely mimics the syntax for overriding virtual functions. Because C++ templates are type-aware and Turing-complete, they can also be used to let the compiler resolve recursive conditionals and generate substantial programs through template metaprogramming. Contrary to some opinion, template code will not generate a bulk code after compilation with the proper compiler settings.[67]

#### Dynamic polymorphism
##### Inheritance
See also: Subtyping

Variable pointers and references to a base class type in C++ can also refer to objects of any derived classes of that type. This allows arrays and other kinds of containers to hold pointers to objects of differing types (references cannot be directly held in containers). This enables dynamic (run-time) polymorphism, where the referred objects can behave differently, depending on their (actual, derived) types.

C++ also provides the dynamic_cast operator, which allows code to safely attempt conversion of an object, via a base reference/pointer, to a more derived type: downcasting. The attempt is necessary as often one does not know which derived type is referenced. (Upcasting, conversion to a more general type, can always be checked/performed at compile-time via static_cast, as ancestral classes are specified in the derived class's interface, visible to all callers.) dynamic_cast relies on run-time type information (RTTI), metadata in the program that enables differentiating types and their relationships. If a dynamic_cast to a pointer fails, the result is the nullptr constant, whereas if the destination is a reference (which cannot be null), the cast throws an exception. Objects known to be of a certain derived type can be cast to that with static_cast, bypassing RTTI and the safe runtime type-checking of dynamic_cast, so this should be used only if the programmer is very confident the cast is, and will always be, valid.

#### Virtual member functions
Ordinarily, when a function in a derived class overrides a function in a base class, the function to call is determined by the type of the object. A given function is overridden when there exists no difference in the number or type of parameters between two or more definitions of that function. Hence, at compile time, it may not be possible to determine the type of the object and therefore the correct function to call, given only a base class pointer; the decision is therefore put off until runtime. This is called dynamic dispatch. Virtual member functions or methods[70] allow the most specific implementation of the function to be called, according to the actual run-time type of the object. In C++ implementations, this is commonly done using virtual function tables. If the object type is known, this may be bypassed by prepending a fully qualified class name before the function call, but in general calls to virtual functions are resolved at run time.

In addition to standard member functions, operator overloads and destructors can be virtual. An inexact rule based on practical experience states that if any function in the class is virtual, the destructor should be as well. As the type of an object at its creation is known at compile time, constructors, and by extension copy constructors, cannot be virtual. Nonetheless, a situation may arise where a copy of an object needs to be created when a pointer to a derived object is passed as a pointer to a base object. In such a case, a common solution is to create a clone() (or similar) virtual function that creates and returns a copy of the derived class when called.

A member function can also be made "pure virtual" by appending it with = 0 after the closing parenthesis and before the semicolon. A class containing a pure virtual function is called an abstract class. Objects cannot be created from an abstract class; they can only be derived from. Any derived class inherits the virtual function as pure and must provide a non-pure definition of it (and all other pure virtual functions) before objects of the derived class can be created. A program that attempts to create an object of a class with a pure virtual member function or inherited pure virtual member function is ill-formed.

### Lambda expressions
C++ provides support for anonymous functions, also known as lambda expressions, with the following form:
```c++
[capture](parameters) -> return_type { function_body }
```
Since C++20, you can write template parameters on a lambda without the keyword template:
```c++
[capture]<template_parameters>(parameters) -> return_type { function_body }
```
If the lambda takes no parameters, and no return type or other specifiers are used, the () can be omitted, that is,
```c++
[capture] { function_body }
```
The return type of a lambda expression can be automatically inferred, if possible, e.g.:
```c++
[](int x, int y) { return x + y; } // inferred
[](int x, int y) -> int { return x + y; } // explicit
```
The [capture] list supports the definition of closures. Such lambda expressions are defined in the standard as syntactic sugar for an unnamed function object.

### Exception handling
Exception handling is used to communicate the existence of a runtime problem or error from where it was detected to where the issue can be handled.[71] It permits this to be done in a uniform manner and separately from the main code, while detecting all errors.[72] Should an error occur, an exception is thrown (raised), which is then caught by the nearest suitable exception handler. The exception causes the current scope to be exited, and also each outer scope (propagation) until a suitable handler is found, calling in turn the destructors of any objects in these exited scopes.[73] At the same time, an exception is presented as an object carrying the data about the detected problem.[74]

Some C++ style guides, such as Google's,[75] LLVM's,[76] and Qt's[77] forbid the usage of exceptions.

The exception-causing code is placed inside a try block. The exceptions are handled in separate catch blocks (the handlers); each try block can have multiple exception handlers, as it is visible in the example below.[78]
```c++
#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    try {
        std::vector<int> vec{3, 4, 3, 1};
        int i{vec.at(4)}; // Throws an exception, std::out_of_range (indexing for vec is from 0-3 not 1-4)
    }
    // An exception handler, catches std::out_of_range, which is thrown by vec.at(4)
    catch (std::out_of_range &e) {
        std::cerr << "Accessing a non-existent element: " << e.what() << '\n';
    }
    // To catch any other standard library exceptions (they derive from std::exception)
    catch (std::exception &e) {
        std::cerr << "Exception thrown: " << e.what() << '\n';
    }
    // Catch any unrecognised exceptions (i.e. those which don't derive from std::exception)
    catch (...) {
        std::cerr << "Some fatal error\n";
    }
}
```
It is also possible to raise exceptions purposefully, using the throw keyword; these exceptions are handled in the usual way. In some cases, exceptions cannot be used due to technical reasons. One such example is a critical component of an embedded system, where every operation must be guaranteed to complete within a specified amount of time. This cannot be determined with exceptions as no tools exist to determine the maximum time required for an exception to be handled.[79]

Unlike signal handling, in which the handling function is called from the point of failure, exception handling exits the current scope before the catch block is entered, which may be located in the current function or any of the previous function calls currently on the stack.

### Enumerated types
This section is an excerpt from Enumerated type § C++.[edit]
C++ has enumeration types that are directly inherited from C's and work mostly like these, except that an enumeration is a real type in C++, giving added compile-time checking. Also (as with structs), the C++ enum keyword is automatically combined with a typedef, so that instead of naming the type enum name, simply name it name. This can be simulated in C using a typedef: typedef enum {Value1, Value2} name;

C++11 also provides a second kind of enumeration, called a scoped enumeration. These are type-safe: the enumerators are not implicitly converted to an integer type. Among other things, this allows I/O streaming to be defined for the enumeration type. Another feature of scoped enumerations is that the enumerators do not leak, so usage requires prefixing with the name of the enumeration (e.g., Color::Red for the first enumerator in the example below), unless a using enum declaration (introduced in C++20) has been used to bring the enumerators into the current scope. A scoped enumeration is specified by the phrase enum class (or enum struct). For example:
```c++
enum class Color {Red, Green, Blue};
```
The underlying type of an enumeration is an implementation-defined integral type that is large enough to hold all enumerated values; it does not have to be the smallest possible type. The underlying type can be specified directly, which allows "forward declarations" of enumerations:
```c++
enum class Color : long {Red, Green, Blue};  // must fit in size and memory layout the type 'long'
enum class Shapes : char;  // forward declaration. If later there are values defined that don't fit in 'char' it is an error.
```


### References:
- [cplusplus](https://www.cplusplus.com/doc/tutorial/arrays/)
- [wikipedia](https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Static_arrays)
- [RobMiller](https://www.doc.ic.ac.uk/~wjk/c++intro/RobMillerE6.html)
- [w3resources](https://www.w3resource.com/cpp-exercises/array/index.php)
- [erlerobotics](https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/arrays_and_strings/exercises_arrays.html)
- [cs.mtsu](https://www.cs.mtsu.edu/~cs1170/manual/lab14/lab14.html)
- [opengenus](https://iq.opengenus.org/list-of-array-problems/)
- [cppforschool](http://www.cppforschool.com/assignment/array_1.html)
- [codesdope](https://www.codesdope.com/practice/cpp-array/)
- [scribd](https://www.scribd.com/document/243976062/Array-Questions-C)
- [tutorialride](https://www.tutorialride.com/cpp-array-programs/17-c-programs-and-code-examples-on-arrays.htm)
- [pdfprof](https://www.pdfprof.com/PDF_Image.php?idt=39748&t=28)

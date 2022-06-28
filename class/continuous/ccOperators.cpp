#include <iostream>

using namespace std;

void sizeofOperator();
void commaOperator();
void conditionalOperator();


int f1( int num ){
    
    return num;
}

int f2( int num ){

    return num;
}

int main() {

    sizeofOperator();
    cout << "\nbr\n";
    commaOperator();

    cout << "\nbr\n";
    conditionalOperator();

    return 0;
}

void sizeofOperator(){

    // refference :: https://en.wikipedia.org/wiki/Sizeof

    int intVariable;
    float floatVariable;
    char charVariable;
    string stringVariable;
    double doubleVariable;

    cout << "size of 5 data types\n\n";
    cout << sizeof(intVariable) << "\n" << sizeof(floatVariable) << "\n" << sizeof(charVariable) << "\n" << sizeof(stringVariable) << "\n" << sizeof(doubleVariable) << "\n";

    cout << "------second-----" << endl;
    int a = 15;
    double d = 3.43;

    int b = sizeof(a++); //value of a doesn't change

    cout << "sizof b= " << b << " and a= " << a << endl;
    cout << "sizeof (a + d)= " << sizeof(a+d);


    /*
      To find out number of elements in a array. 
      Sizeof can be used to calculate number of elements of the array automatically. Let's see...
    */
    cout << "\nArray---\n";
    int myArr[] = { 1, 2, 3, 4, 7, 98,
    0, 12, 35, 99, 14, 3, 4, 7, 98, 1, 2, 35, 99, 14, 3, 4,};

    cout << "number of elements in myArr is= " << sizeof(myArr) / sizeof(myArr[0]);

    cout << "\n--Malloc\n";

    // Dynamically allocate memory using malloc()
    int* ab= (int*)malloc(10 * sizeof(int));
    int value = 23;
    ab = &value;


    cout << *ab;
    // refference - checkout this article to learn more: https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/

}

void commaOperator() {
    // The comma operator (represented by the token) is a binary operator that evaluates its first operand and discards the result, it then evaluates the second operand and returns this value (and type).
    
    // Comma as an operator: 
    int i = (5, 10);

    int j = (f1(1), f2(2)); /* 
                              f1() is called (evaluated) first followed by f2().
                              The returned value of f2() is assigned to j
                          */
    cout << "Comma as an operator: " << i << "\n" << j;

    // Comma as a separator: 

    int firstNum = 2, secNum = 4;
    

    /*
      Comma acts as a separator when used with function calls and definitions, function like macros, variable declarations, enum declarations, and similar constructs.  
    */
   cout << "\nComma as a separator::\n";
   int myNum;
   /*
   int myNum = 5, 15;
     This will generate an error as comma in this case acts as a separator as declaration takes place.
     We can solve this error in the following way_
   */
   myNum = 5, 15;
   
   cout << "myNum: " << myNum;

   // refference :: https://www.geeksforgeeks.org/comna-in-c-and-c/
}

void conditionalOperator(){
    // follow: https://www.geeksforgeeks.org/operators-c-c/
}
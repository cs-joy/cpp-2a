#include <iostream>

using namespace std;

void sizeofOperator();

int main() {

    sizeofOperator();
    cout << "br\n";
    commaOperator();

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
    int i = (5, 10);
    cout << i;
}
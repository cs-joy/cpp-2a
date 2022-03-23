/*
using function definition after main() function. function prototype is declared before main()
*/
//example :: fP2(Function Prototype Example2)
//author : md.jahangir alam

#include <iostream>
using namespace std;

//function prototype
int add(int, int);

int main() {

    int sum;
    //calling the function and storing the returned value in sum
    sum = add(5, 5);

    //showing result
    cout << "5 + 5 = " << sum << endl;

    return 0;
}

//function definition
int add(int x, int y) {
    return (x + y);
}

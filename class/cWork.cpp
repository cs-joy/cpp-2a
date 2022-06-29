#include <iostream>
using namespace std;

void andOperator(){
    int fNumber = 15, secNumber = 8;

    if(fNumber > 20 && secNumber < 15){
        cout << "condition is true";
    } else {
        cout << "condition is false";
    }
}

void orOperator(){

    int fNumber = 4, secNumber = 14;

    if(fNumber > 14 || secNumber < 15){
        cout << "condition is true";
    } else {
        cout << "condition is false";
    }
    
}

void notAndOperator(){

    int fNumber = 11, secNumber = 9;

    if(!(fNumber > 7 && secNumber < 12)){
        cout << "condition is true";
    } else {
        cout << "condition is false";
    }
    
}

void notOrOperator(){

    int fNumber = 11, secNumber = 9;

    if(!(fNumber > 7 || secNumber > 12)){
        cout << "condition is true";
    } else {
        cout << "condition is false";
    }
    
}

int main(){
    cout << "AND Operator\n---------\n";
    andOperator();
    cout << "\nOR Operator\n---------\n";
    orOperator();
    cout << "\nnotAnd Operator\n---------\n";
    notAndOperator();
    cout << "\nnotOr Operator\n---------\n";
    notOrOperator();

    return 0;
}
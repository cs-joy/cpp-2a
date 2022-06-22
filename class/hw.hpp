#include <iostream>
using namespace std;

class calClass {
    
public:
    int result;
    int myFunction(int a, int b, int c ){
        
      if(c == 1){
        result = a + b;
      } else if(c == 2){
        if(a > b){
          result = a - b;
        } else {
          result = b - a;
        }
      } else if(c == 3){
        result = a * b;
      } else if(c == 4){
        if(a > b){
          result = a / b;
        } else {
          result = b / a;
        }
      } else {
        cout << "please meet with requirements!" << endl;
      }
      return result;
    }

    void display(){
        cout << "result= " << result << endl;
    }

};

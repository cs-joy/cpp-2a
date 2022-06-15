#include<iostream>
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

int main() {
    int x, y, z;

    cout << "x= ";
    cin >> x;
    cout << "y= ";
    cin >> y;
    cout << "z= ";
    cin >> z;

    calClass obj, obj2;

    obj.myFunction(x, y, z);
    if(z < 5 && z > 1 ){
        obj.display();
    }

    return 0;
}

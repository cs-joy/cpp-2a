/*demonstrate the working of
@getline()
@push_back() 
@pop_back()
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;

    //take input using getline()
    cout << "Type a initial string: " << str << endl;
    getline(cin, str);
    cout << "The initial string: " << str << endl;

    //inserting a character
    str.push_back('s');

    cout << "The string after push_back operation is: " << str << endl;

    //deleting a character
    str.pop_back();

    cout << "The string after pop_back operation is: " << str << endl;

    return 0;
}
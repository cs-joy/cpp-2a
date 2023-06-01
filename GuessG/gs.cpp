#include <iostream>
#include <string>
using namespace std;

// Global Variables
string s = "10";
int i = 0;

int getInput(){
  // we'll first try to get an integer
  try {
    cout << "--------------------------------------" << endl;
    cout << "Guess a number 1 - 10, or 0 to quit: " << endl;
    cin >> s;
    i = stoi(s); // convert the string to an int
    // make sure the number is in range
    if(i > 10 || i < 0){
      cout << "Out of range." << endl;
    }
    // getting here means we have a valid number
    else {
        cout << "You guessed " << i << endl;
      }
  }
  catch (invalid_argument const &e){
    cout << "Bad input: invalid_argument thrown" << endl;
  }
  catch(out_of_range const &e){
    cout << "Integer overflow" << endl;
  }
return i;
}


//Creating the Win/Lose Scenarios
int secret_number = 1 + rand() % 10;

void playGame(){
while(s != "0")
  {
    int secret_number = 1 + rand() % 10;
    int guess = getInput();
if (guess == 0 ){
      cout << "Goodbye" << endl;
    }
    // check for correct guess
    else if (guess == secret_number){
      cout << "You got it! You must be psychic." << endl;
    }
    else {
      cout << "Nope. You aren't at all psychic." << endl;
    }
  }
}
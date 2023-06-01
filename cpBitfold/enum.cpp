#include <iostream>

using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3,
    squads = 234
} card;

enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
} button;

int main() {

    week today;

    today = Saturday;
    cout << "Day " << today + 1<< endl;
    cout << "size= " << sizeof(week) << endl;

    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes." << endl;

    int button = BOLD | UNDERLINE;

    cout << button << endl;

    return 0;
}

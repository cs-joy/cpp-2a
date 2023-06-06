#include<iostream>
//#include<string>

using namespace std;

#define idSize 10
#define bnSize 250
#define baSize 150

class book
{
    char bookID[idSize]; // book id
    char bookName[bnSize]; //book name
    char bookAuthor[baSize]; // author of book
    
    /*
    int bookID;
    string bookName;
    string bookAuthor;
    */

    public:
        book()
        {
            createBook();
            showBook();
        }

        void createBook()
        {
            cout << "NEW BOOK ENTRY" << endl;
            cout << "--------------" << endl;

            cout << "ENTER BOOK ID: " << endl;
            gets(bookID);

            cout << "\nENTER BOOK NAME: " << endl;
            gets(bookName);

            cout << "ENTER AUTHOR NAME: " << endl;
            gets(bookAuthor);

            cout << "\n\nBook Created..\n\n" << endl;
        }

        void showBook(void)
        {
            cout << "Book ID: ";
            puts(bookID);
            cout << "Book Name: ";
            puts(bookName);
            cout << "Book Author: ";
            puts(bookAuthor);
        }

        
};
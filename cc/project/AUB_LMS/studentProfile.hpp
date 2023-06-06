#include<string>

using namespace std;

class studentProfile
{
    string _strName;
    int _batchNum;
    int _strID;
    string _department;

    public:
        studentProfile()
        {
            studentInfo();
            displayUserInfo();
        }

        void studentInfo(void)
        {
            // name
            cout << "Enter student name: ";
            getline(cin, _strName);

            // batch
            cout << "Enter your batch no: ";
            cin >> _batchNum;

            // id
            cout << "Enter student ID: ";
            cin >> _strID;

            // department
            cout << "Department name: (ex: BBA, CSE, ENG): ";
            cin >> _department;
            
        }

        void displayUserInfo(void)
        {
            cout << "Student Info\n";

            cout << "Name: " << _strName << endl;
            cout << "Batch: " << _batchNum << endl;
            cout << "ID: " << _strID << endl;
            cout << "Department: " << _department << endl;

        }
};
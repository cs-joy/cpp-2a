#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include "windows.h"

#define LIMIT 100

using namespace std;

//cursor position
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class applicant
{
    char name[LIMIT];
    int age;
    char address[LIMIT];
    int m_sal;
    int h_loan;
    int p_loan;
    int no_chg_bounce;
    char own_house;
    char spouse_working;
    char dependent_parents;
    int company_tier;

public:
    void get_data();
    int calc_liability();
    void display_score();
};
void applicant::get_data()
{
    system("cls");
    cout << "Name: ";
    cin.getline(name, LIMIT);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Age: ";
    cin >> age;

    cin.clear();
    cin.ignore(1000, '\n');

    cout << "Address: ";
    cin >> address[LIMIT];

    cin.clear();
    cin.ignore(1000, '\n');

    cout << "Monthly Salary: ";
    cin >> m_sal;

    cout << "Total Home Loan EMI: ";
    cin >> h_loan;

    cout << "Total Personal Loan EMI: ";
    cin >> p_loan;

    cout << "Number of check bounces in last six months: ";
    cin >> no_chg_bounce;

    cout << "Own house? (y or no): ";
    cin >> own_house;

    cout << "Spouse Working? (y or n): ";
    cin >> spouse_working;

    cout << "Dependent parents? (y or n): ";
    cin >> dependent_parents;

    cout << "Company tier? (y or n): ";
    cin >> company_tier;
}

int applicant::calc_liability()
{
    int score = 0;
    int liability;

    if(age>22 && age<=30)
    {
        score+=2;
    }
    else
    {
        if(age>30 &&age<=35)
        {
            score+=1;
        }
        else
        {
            score-=1;
        }
    }

    liability=h_loan+p_loan;
    if(liability <= m_sal/4)
    {
        score+=5;
    }
    if(liability > m_sal/4 && liability <= m_sal/3)
    {
        score+=3;
    }
    if(liability > m_sal/3 && liability <= m_sal/2)
    {
        score+=1;
    }
    if(liability > m_sal/2)
    {
        score-=1;
    }
    if(no_chg_bounce>1)
    {
        score-=2;
    }
    if(no_chg_bounce == 1)
    {
        score-=1;
    }
    if(no_chg_bounce == 0)
    {
        score+=1;
    }
    if(p_loan > h_loan)
    {
        score-=1;
    }
    else
    {
        score+=1;
    }

    if(own_house == 'y')
    {
        score+=1;
    }
    if(spouse_working == 'y')
    {
        score+=1;
    }
    if(dependent_parents == 'y')
    {
        score-=1;
    }
    else
    {
        score+=1;
    }
    if(company_tier == 1)
    {
        score+=3;
    }
    if(company_tier == 2)
    {
        score +=2;
    }
    else
    {
        score+=1;
    }

    return(score);
}

void applicant::display_score()
{
    int sc = calc_liability();
    system("cls");

    if(sc>9)
    {
        cout << "The applicant " << name << " is at low risk. \nCredit score= " << sc << "\n Credit can be given.";
    }
    else
    {
        if(sc>5 && sc<=9)
        {
            cout << "The applicant " << name << " is at average risk. \nCredit score= " << sc << "\nCredit can be given with due precaution.";
        }
        else
        {
            cout << "The applicant " << name << " is at high risk. \nCredit score= " << sc << "\nCredit can not be given.";
        }
    }
    getch();
}

int main()
{
    char flag= 'f';
    applicant a;
    char ch;
    while(1)
    {
        system("cls");
        gotoxy(31, 8);
        cout << "___Credit Cal____";
        gotoxy(22, 12);
        cout << "1 - Enter loan applicant's details";
        gotoxy(22, 13);
        cout << "2 - Display credit score";
        gotoxy(22, 14);
        cout << "3 - Exit";
        gotoxy(22, 16);

        cout << "Select an option by typing the numeric code: ";
        ch=getchar();
        switch(ch){
        case('1'):
        {
            a.get_data();
            flag= 't';
            break;
        }
        case('2'):
        {
            if(flag == 'f')
            {
                gotoxy(22, 18);
                cout << "Loan applicant's details not yet entered! Press any key to continue..";
                getch();
            }
            else
            {
                a.display_score();
            }
            break;
        }
        case('3'):
        {
            exit(1);
            break;
        }
        default:
        {
            gotoxy(22, 18);
            cout << "Invalid choice! Press any key to continue..";
            getch();
        }
        } // end of switch
        } // end of while
    //return 0;
}


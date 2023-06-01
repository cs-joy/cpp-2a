#include <iostream>

using namespace std;

class car
{
    private:

	    string name;
	    int num;

	public:
		car(string a, int n)
		{
			cout << "Constructor called" << endl;
			this ->name = a;
			this ->num = n;
		}

		/*void enter()
		{
			cin>>name;
			cin>>num;
		}*/

		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Num: " << num << endl;
		}
};

int main() {

    // Using new keyword
	car *p = new car("Honda", 2017);
	p->display();

    return 0;
}

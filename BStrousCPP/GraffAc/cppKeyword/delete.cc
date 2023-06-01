#include <bits/stdc++.h>
using namespace std;

struct P {
	static void operator delete(void* ptr, size_t sz)
	{
		cout << "custom delete for size " << sz << " bytes" <<endl;
		delete (ptr); // ::operator delete(ptr) can also be used
	}
	static void operator delete[](void* ptr, size_t sz)
	{
		cout << "custom delete for size " << sz << " bytes"  <<endl;
		delete (ptr); // ::operator delete(ptr) can also be used
	}
};

void secMalloc() {
    // Dynamic memory allocated by using malloc
    int* ptr2 = (int*)malloc(sizeof(int));
 
    delete ptr2;
 
    cout << sizeof(ptr2) << "bytes (ptr2) deleted successfully ";
}

void secDestroy() {
    // Creating int pointer
    int* ptr1 = new int;
     
    // Initializing pointer with value 20
    int* ptr2 = new int(20);
 
    cout << "Value of ptr1 = " << *ptr1 << "\n";
    cout << "Value of ptr2 = " << *ptr2 << "\n";
 
    delete ptr1; // Destroying ptr1
    delete ptr2; // Destroying ptr2

    cout << "Value of ptr1 = " << *ptr1 << "\n";
    cout << "Value of ptr2 = " << *ptr2 << "\n";
}

struct MyClass {
  MyClass() {std::cout <<"MyClass constructed\n";}
  ~MyClass() {std::cout <<"MyClass destroyed\n";}
};

int main()
{
	P* var1 = new P;
	delete var1;

	P* var2 = new P[5];
	delete[] var2;
    cout << "\n--------------\n";

    //secMalloc();
    //secDestroy();
    
    MyClass * pt = new (std::nothrow) MyClass;
    delete pt;    // implicitly calls ::operator delete(pt)(pt);

    return 0;
}

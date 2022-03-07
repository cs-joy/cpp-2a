// MIT License

// Copyright (c) 2022 cs-joy

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

/*
* Title: Application of Pointers
* Description: Pointer class 
* Date: 09-October-2017
* Author: Mohammad Zahangir Alam
*/

/*--Application of Pointers--

Functions in C++ can return only one value. Further, all the variables declared in a function are allocated on the function call stack. As soon as the function returns, all the stack variables are destroyed.

Arguments to function are passed by value, and any modification done on the variables doesn’t change the value of the actual variables that are passed. Following example helps illustrate this concept:-

*/

#include <iostream>
using namespace std;
void test(int*, int*);

int main() {
    int x = 2, y = 2;

    cout << "Before changing: " << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    test(&x, &y);
    cout << "After changing: " <<endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

void test(int* n1, int* n2) {
    *n1 = 10;
    *n2 = 11;
}

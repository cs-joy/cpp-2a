// C++ program to demonstrate uses of some string function
#include <bits/stdc++.h>
using namespace std;

// this function returns floating point part of a number-string
string returnFloatingPart(string str)
{
	int pos = str.find(".");
	if (pos == string::npos)
		return "";
	else
		return str.substr(pos + 1);
}

// This function checks whether a string contains all digit or not
bool containsOnlyDigit(string str)
{
	int l = str.length();
	for (int i = 0; i < l; i++)
	{
		if (str.at(i) < '0' || str.at(i) > '9')
			return false;
	}
	// if we reach here all character are digits
	return true;
}

// this function replaces all single space by %20
// Used in URLS
string replaceBlankWith20(string str)
{
	string replaceby = "%20";
	int n = 0;

	// loop till all space are replaced
	while ((n = str.find(" ", n)) != string::npos )
	{
		str.replace(n, 1, replaceby);
		n += replaceby.length();
	}
	return str;
}

// driver function to check above methods
int main()
{
	string fnum = "23.342";
	cout << "Floating part is : " << returnFloatingPart(fnum)
		<< endl;

	string num = "3452";
	if (containsOnlyDigit(num))
		cout << "string contains only digit" << endl;

	string urlex = "google com in";
	cout << replaceBlankWith20(urlex) << endl;

	return 0;	
}


// ||> https://www.geeksforgeeks.org/c-string-class-and-its-applications/
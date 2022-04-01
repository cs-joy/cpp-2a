//demonstrate various function string class

#include <bits/stdc++.h>

using namespace std;

int main() {
    //various constructor of string class

    //initialization by raw string
    string rzs("Wlecome Walker!\nConnecting...");

    //initialization by another string
    string rjs(rzs);

    //initialization by character with number of occurence
    string sjr(5, '#');

    //initialization by part of another string
    string szr(rzs, 6, 6); //from 6th index(second parameter) |> 6 characters(third parameter)

    //initialization by part of another string: iterator version
    string szz(rjs.begin(), rjs.begin() + 5);

    cout << "rjs= " << rjs << endl;
    cout << "rzs= " << rzs << endl;
    cout << "sjr= " << sjr << endl;
    cout << "szr= " << szr << endl;
    cout << "szz= " << szz << endl;

    //assignment operator
    string jss = szr;

    //clear() deletes all character from string
    szr.clear();

    //both size() and length() return length of string and the work as synonyms
    int js = jss.length(); //same as"js = jss.size();"

    cout << "Length of string is: " << js << endl;

    //a particular character can be accessed using at()
    // [] operator
    char sj = jss.at(2); //same as "sj = jss[2;"

    cout << "Third character of string is: " << sj << endl;

    //front return first character and back returns last character of string

    char sj_f = jss.front(); //same as "sj_f = jss[0];"
    char sj_b = jss.back(); // same as "sj_b = jss[jss.length()-1];"

    cout << "First char is: " << sj_f << ", Last char is: " << sj_b << endl;

    //c_str() returns null terminated char array version of string
    const char* charstr = jss.c_str()
    printf("%s\n", charstr);

    //append add the argument string at the end
    jss.append(" extension"); //same as jss += " extension"

    //another version of append, which appends part of other string
    szr.append(jss, 0, 6); //at 0th position 6 character
    cout <<"jss= " << jss << endl;
    cout << "szr= " << szr << endl;

    // find returns index where pattern is found.
    //if pattern is not there it returns predefined
    //constant npos whose value is -1

    if (jss.find(szr) != string::npos)
        cout << "szr found in jss at: " << jss.find(szr) << " position" << endl;
    else
        cout << "szr not found in jss" << endl;

    return 0;
}
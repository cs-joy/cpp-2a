#include<iostream>

using namespace std;

int main() {

    int limit, sum=0;

    cin >> limit;

    for(int i=0; i<=limit; i++) {
        sum+=i;
    }
    cout << sum << endl;

    return 0;
}
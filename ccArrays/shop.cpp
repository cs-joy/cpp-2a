#include <iostream>

#define maxGirls 4
#define maxItems 3

using namespace std;

int main() {
    int value[maxGirls][maxItems];
    
    int girlsToal[maxGirls], i, j;

    for(i=0; i<maxGirls; i++) {
        girlsToal[i] = 0;

        for(j=0; j<maxItems; j++) {
            cin >> value[i][j];
            girlsToal[i] = girlsToal[i] + value[i][j];

            //cout << "girlsToal[" << i << "]= " << girlsToal[i] << " ";
        }
    }
/*
    cout << endl;

    cout << "------------";
    for(i=0; i<maxGirls; i++) {
        cout << endl;
        for(j=0; j<maxItems; j++) {
            cout << value[i][j] << " | ";
        }
    }
*/
    return 0;
}
#include <iostream>
using namespace std;

const int N=10;

int main()
{
    int t[N],i,j,V;
    bool found;
    for(i=0;i<N;i++)
    {
        cout << "Type an integer: ";
        cin >> t[i];
    }
    cout << "Type the value of V: ";
    cin >> V;

    for (i=0;i<N;i++)
        if (t[i]==V)
        {
            for (j=i;j<N-1;j++)
                t[j]=t[j+1];
            t[N-1]=0;
            break;
        }

    for(i=0;i<N;i++)
        cout << t[i] << endl;

    return 0;
}
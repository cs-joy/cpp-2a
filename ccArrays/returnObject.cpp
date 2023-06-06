#include<iostream>
#include<conio.h>

using namespace std;

class matrix {
    int m[3][3];

    public:
        void read(void) {
            cout << "Enter the elements of the 3 by 3 matrix: " << endl;
            int i, j;
            for(i=0; i<3; i++) {
                for(j=0; j<3; j++) {
                    cout << "m[" << i << "][" << j << "]= ";
                    cin >> m[i][j];
                }
            }
        }

        void display(void) {
            int i, j;
            for(i=0; i<3; i++) {
                cout << endl;
                for(j=0; j<3; j++) {
                    cout << m[i][j] << "\t";
                }
            }
        }

        friend matrix trans(matrix);
};

matrix trans(matrix m1) {
    matrix m2;
    int i,j;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            m2.m[i] [j] = m1.m[j] [i];
        }
    }

    return(m2);
}

int main() {

    matrix mat1, mat2;
    mat1.read();
    cout << "\nYou entered the following matrix: ";
    mat1.display();

    mat2 = trans(mat1);
    cout << "\nTransposed matrix: ";
    mat2.display();

    getch();

    return 0;
}
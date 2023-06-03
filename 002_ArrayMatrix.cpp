#include <iostream>

using namespace std;

int main()
{
    //deklarasi array
    int a[3][5] = {{10,20,30,40,50},{50,40,30,20,10},{11,22,33,44,55}};
    int b[3][5] = {{11,22,33,44,55},{55,44,33,22,11},{10,20,30,40,50}};
    int c[3][5];
    //menampilkan array a
    cout << "Matriks A :" << endl;
    for (int m=0; m<3; m++){
        for (int n=0; n<5; n++){
            cout << a[m][n] << ends;
        }
        cout << endl;
    }
    cout << endl;
    //menampilkan array b
    cout << "Matriks b :" << endl;
    for (int m=0; m<3; m++){
        for (int n=0; n<5; n++){
            cout << b[m][n] << ends;
        }
        cout << endl;
    }
    cout << endl;
    //menjumlahkan array a dan b, dan menampilkan hasilnya
    cout << "Matriks C =A + B :" << endl;
    for (int m=0; m<3; m++){
        for (int n=0; n<5; n++){
            c[m][n] = a[m][n] + b[m][n];
            cout << c[m][n] << ends;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

#include <iostream>
 
using namespace std;
 
int main()
{
    int a[10];
    int b;
    int *c = a;
 
    cout << "Masukkan 10 Array" << endl;
    b=0;
    while (b<10){
        cout << "Array Ke " << b << " : ";
        cin >> a[b];
        b++;
    }
    system("pause");
    system("cls");
    cout << "Pemanggilan menggunakan Pointer" << endl;
    b=0;
    while (b<10){
        cout << "Array Ke " << b << " : " << c[b] << endl;
        b++;
    }
    return 0;
}

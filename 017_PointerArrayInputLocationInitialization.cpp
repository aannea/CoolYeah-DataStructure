#include <iostream>

using namespace std;

int main()
{
    int a[10], e[10];
    int b,d,f;
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
    system("pause");
    system("cls");
    cout << "Menampilkan alamat memory" << endl;
    b=0;
    while (b<10){
        cout << "Array Ke " << b << " : " << &c[b] << endl;
        b++;
    }
    system("pause");
    ulang:
    system("cls");
    cout << "Inisialisasi ulang";
    cout << "Jumlah data yang ingin di inisialisasi, min 5 : ";
    cin >> d;
    if (d<5){
        cout << "Maaf minimum inisialisasinya 5, yang anda inputkan kurang" << endl;
        system("pause");
        goto ulang;
    }
    else if (d>10){
        cout << "Maaf maksimum inisialisasinya 10, yang anda inputkan lebih" << endl;
        system("pause");
        goto ulang;
    }
    else{
        b=0;
        while (b<d){
            cout << "Array Ke : " ;
            cin >> e[b];
            b++;
        }
    }
    cout << endl;
    b=0;
    while (b<d){
        cout << "Array Ke " << e[b] << " di ganti : ";
        cin >> f;
        c=&a[e[b]];
        *c=f;
        b++;
    }
    cout << endl;
    cout << "Inisialisasi terdapat pada :" << endl;
    b=0;
    while (b<d){
        cout << "Array Ke " << e[b] << " : " << a[e[b]] << endl;
        b++;
    }
    system("pause");
    system("cls");
    cout << "Isi seluruh array" << endl;
    b=0;
    while (b<10){
        cout << "Array Ke " << b << " : " << a[b] << endl;
        b++;
    }
    return 0;
}

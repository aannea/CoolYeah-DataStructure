#include <iostream>

using namespace std;

int main()
{
    int a;
    struct toko{
        string kode, nama;
        int stok, harga;
    };

    toko isitok[10];

    a=0;
    while(a<10){
        cout << "=====DATA BARANG TOKO=====" << endl;
        cout << "       DATA KE " << a+1 << endl;
        cout << "Kode   : ";cin >> isitok[a].kode;
        cout << "Nama   : ";cin >> isitok[a].nama;
        cout << "Stok   : ";cin >> isitok[a].stok;
        cout << "Harga  : Rp";cin >> isitok[a].harga;
        system("pause");
        system("cls");
        a++;
    }
    cout << "=====Data Barang Toko=====" << endl;
    a=0;
    while(a<10){
        cout << "Kode : " << isitok[a].kode << "\tNama : " << isitok[a].nama << "\tStok : " << isitok[a].stok << "\tHarga : Rp" << isitok[a].harga << endl;
        a++;
    }
    return 0;
}

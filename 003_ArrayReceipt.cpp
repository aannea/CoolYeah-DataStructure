#include <iostream>
#include <windows.h>

using namespace std;

//deklarasi array dan variable
int kode[5]={001,002,003,004,005}, harga[5]={2000,3000,4000,3000,1500}, pilih[5], jumlah[5];
string nama[5]={"Penghapus", "Pensil", "Buku Tulis", "Rautan", "Penggaris"};
int a=0,b=0,c,d,e,f=0,g=0;
char jwb;

//prosedur gotoxy untuk tampilan
void gotoxy(short int x, short int y) {
    COORD a = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

//prosedur tampil untuk menampilkan menu
void tampil(){
    a=0;
    gotoxy(40,1);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(40,3);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(40,5);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(40,11);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    while (a<=9){
        gotoxy(40,a+1);
        cout << "=";
        a++;
    }
    a=0;
    while (a<=9){
        gotoxy(81,a+1);
        cout << "=";
        a++;
    }
    gotoxy(57,2);cout << "Daftar";
    gotoxy(41,4);cout << "Kode";
    gotoxy(51,4);cout << "Nama";
    gotoxy(71,4);cout << "Harga";
    
    a=0;
    while (a<5){
        gotoxy(41,a+6);cout << "00" << kode[a];
        gotoxy(51,a+6);cout << nama[a];
        gotoxy(71,a+6);cout << harga[a];
        a++;
    }
}

//inputan untuk menginput menu yang di pilih, dan jumlah
inputa(){
    a=0;
    gotoxy(40,14);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    while (a<=3){
        gotoxy(40,a+11);
        cout << "=";
        a++;
    }
    a=0;
    while (a<=3){
        gotoxy(81,a+11);
        cout << "=";
        a++;
    }
    a=0;
    //perulangan untuk inputan
    while (a<5){
        gotoxy(41,12);cout << "Kode    : ";
        gotoxy(41,13);cout << "Jumlah  : ";
        gotoxy(51,12);cin >> pilih[a];
        gotoxy(51,13);cin >> jumlah[a];
        b++;
        a++;
        gotoxy(41,15);cout << "Tambah lagi [y/t]?";cin >> jwb;
        if (jwb =='y'||jwb == 'Y'){
            gotoxy(51,12);cout << "                              ";
            gotoxy(51,13);cout << "                              ";
            gotoxy(41,15);cout << "                    ";
        }
        else {
            a=5;
        }
    }
}

//untuk menampilkan hasil atau nota
void hasil(){
    system("cls");
    a=0;
    gotoxy(30,1);
    while (a<=61){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(30,3);
    while (a<=61){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(30,5);
    while (a<=61){
        cout << "=";
        a++;
    }
    a=0;c=b+6;
    gotoxy(30,c);
    while (a<=61){
        cout << "=";
        a++;
    }
    a=0;
    while (a<c+4){
        gotoxy(30,a+1);
        cout << "=";
        a++;
    }
    a=0;
    while (a<c+4    ){
        gotoxy(91,a+1);
        cout << "=";
        a++;
    }
    a=0;c=b+11;
    gotoxy(30,c);
    while (a<=61){
        cout << "=";
        a++;
    }

    gotoxy(57,2);cout << "TOTAL";
    gotoxy(31,4);cout << "Kode";
    gotoxy(41,4);cout << "Nama";
    gotoxy(61,4);cout << "Jumlah";
    gotoxy(71,4);cout << "Harga";
    gotoxy(81,4);cout << "Total";

    a=0;
    d=5;
    //untuk tampilan barang apa saja yang di pilih
    while(a<b){
        d++;
        gotoxy(31,d);cout << "00" << pilih[a];
        gotoxy(41,d);cout << nama[pilih[a]-1];
        gotoxy(61,d);cout << jumlah[a];
        gotoxy(71,d);cout << harga[pilih[a]-1];
        gotoxy(81,d);cout << "Rp" << jumlah[a]*harga[pilih[a]-1];
        a++;
    }
    a=0;
    //kalkulasi
    while (a<b){
        f=f+jumlah[a];
        g=g+jumlah[a]*harga[pilih[a]-1];
        a++;
    }
    //tampilan untuk pembayaran
    gotoxy(31,b+7);cout << "Jumlah item     :" << f;
    gotoxy(31,b+8);cout << "Total Pembelian :Rp" << g;
    gotoxy(31,b+10);cout << "Kembalian       :Rp";
    gotoxy(31,b+9);cout << "Jumlah bayar    :Rp";cin >> e;
    gotoxy(50,b+10);cout << e-g;
}

int main()
{   
    //untuk memanggil prosedur tampil
    tampil();
    //untuk memanggil prosedur inputa
    inputa();
    //untuk memanggil prosedur hasil
    hasil();

    //untuk meletakkan return 0 di bagian bawah dari tampilan
    gotoxy(1,26);
    return 0;
}

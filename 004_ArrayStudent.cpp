#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

//deklarasi array dan variable
string nama[255];
int nim[255];
float pretest[255],tuga[255],tugb[255],uts[255],uas[255],postest[255],jml[255],rata[255];
int a,c,d;
bool b=true;
char jwb;
float ttl=0, rataa=0, ratafi;

void gotoxy(short int x, short int y) {
    COORD a = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

//prosedur isi untuk menginput data
void isi(){
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
    gotoxy(40,12);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    while (a<=11){
        gotoxy(40,a+1);
        cout << "=";
        a++;
    }
    a=0;
    while (a<=11){
        gotoxy(81,a+1);
        cout << "=";
        a++;
    }
    c=0;
    while (b){
        gotoxy(56,2);cout << "Data Ke " << c+1;

        gotoxy(41,4);cout << "Nama    : ";
        gotoxy(41,5);cout << "NIM     : ";
        gotoxy(41,6);cout << "Pretest : ";
        gotoxy(41,7);cout << "Tugas 1 : ";
        gotoxy(41,8);cout << "Tugas 2 : ";
        gotoxy(41,9);cout << "UTS     : ";
        gotoxy(41,10);cout << "UAS     : ";
        gotoxy(41,11);cout << "Postest : ";

        gotoxy(51,4);cin >> nama[c];
        gotoxy(51,5);cin >> nim[c];
        gotoxy(51,6);cin >> pretest[c];
        gotoxy(51,7);cin >> tuga[c];
        gotoxy(51,8);cin >> tugb[c];
        gotoxy(51,9);cin >> uts[c];
        gotoxy(51,10);cin >> uas[c];
        gotoxy(51,11);cin >> postest[c];

        c++;

        gotoxy(41,14);cout << "Tambah lagi [y/t]?";cin >> jwb;
        if (jwb =='y'||jwb == 'Y'){
            gotoxy(51,4);cout << "                              ";
            gotoxy(51,5);cout << "                              ";
            gotoxy(51,6);cout << "                              ";
            gotoxy(51,7);cout << "                              ";
            gotoxy(51,8);cout << "                              ";
            gotoxy(51,9);cout << "                              ";
            gotoxy(51,10);cout << "                              ";
            gotoxy(51,11);cout << "                              ";
            gotoxy(41,14);cout << "                    ";
        }
        else {
            b=false;
        }
    }

}

//prosedur untuk menampilkan hasil
void tampil(){
    system("cls");
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
    a=0; d=c+6;
    gotoxy(40,d);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(40,d+3);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    while (a<=d+2){
        gotoxy(40,a+1);
        cout << "=";
        a++;
    }
    a=0;
    while (a<=d+2){
        gotoxy(81,a+1);
        cout << "=";
        a++;
    }
    gotoxy(58,2);cout << "Hasil";
    gotoxy(41,4);cout << "Banyak Inputan : " << c;
    a=0;
    //manipulator
    cout << setiosflags(ios::fixed);
    //untuk menampilkan data
    while (a<c){
        gotoxy(41,6+a);cout << setprecision(2) << nama[a];
        jml[a]=pretest[a]+tuga[a]+tugb[a]+uts[a]+uas[a]+postest[a];
        rata[a]=jml[a]/6;
        gotoxy(61,6+a);cout << "Rata-rata : "<< setprecision(2) << rata[a];
        a++;
    }
    a=0;
    while (a<c){
        ttl=ttl+jml[a];
        rataa=rataa+rata[a];
        a++;
    }
    ratafi=rataa/c;
    gotoxy(41,7+c);cout << "Jumlah Total    : " << setprecision(2) << ttl;
    gotoxy(41,8+c);cout << "Rata-rata Nilai : " << setprecision(2) << ratafi;
}

int main()
{
    //memanggil prosedur isi
    isi();
    //memanggil prosedur tampil
    tampil();

    //untuk meletakkan return 0 di bagian bawah dari tampilan
    gotoxy(1,d+5);
    return 0;
}

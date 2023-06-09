#include <iostream>
#include <string.h>
#define max 15

using namespace std;

struct Tumpukan{
    int atas;
    char kalimat[max];
}T;

void masukan(char x){
    if(T.atas==max){
        cout << "Tumpukan sudah penuh" << endl;

    }else{
        T.atas=T.atas+1;
        T.kalimat[T.atas]=x;
    }
}

char ambil(){
    char hasil;
    if(T.atas==0){
        cout << "Tumpukan kosong" << endl;
        hasil=' ';
    }else{
        hasil=T.kalimat[T.atas];
        T.atas=T.atas-1;
    }
    return hasil;
}

int main()
{
    int i;
    char kata[max];
    system("cls");
    T.atas=0;

    cout<<"Masukan kalimat yang akan dibalik : ";
    gets(kata);

    system("cls");
    cout<<"Kata yang akan dibalik : "<<kata<<endl;

    for(int i=0;i<strlen(kata);i++){
        masukan(kata[i]);
    }
    cout<<"Kalimat setelah dibalik : ";

    for(int i=0;i<strlen(kata);i++){
        cout<<""<<ambil();
    }

    return 0;
}

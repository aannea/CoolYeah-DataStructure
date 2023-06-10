#include <iostream>
#define MAX 100

using namespace std;

struct queue
{
    string nama[MAX];
    int no[MAX];
    int head;
    int tail;
} antrian;

int no=0, nokel=0;

void create()
{
    antrian.head = antrian.tail = -1;
}

int isEmpty()
{
    if (antrian.tail == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (antrian.tail == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int enqueue(string nama)
{
    no++;
    if(isEmpty() == 1){
        antrian.head = antrian.tail = 0;
        antrian.nama[antrian.tail] = nama;
        antrian.no[antrian.tail] = no;
        cout << " Nama : " << antrian.nama[antrian.tail] << endl;
        cout << " No. Antrian : " << antrian.no[antrian.tail] << "/" << MAX << endl;
        cout << " Estimasi waktu personal meet & greet adalah 5 menit." << endl;
        cout << " Silahkan tunggu " << (antrian.no[antrian.tail]*5)-5 << " menit lagi untuk tiba giliran anda" << endl;
        cout << " Terima Kasih" << endl;
    }
    else if(isFull() == 0){
        antrian.tail++;
        antrian.nama[antrian.tail] = nama;
        antrian.no[antrian.tail] = no;
        cout << " Nama : " << antrian.nama[antrian.tail] << endl;
        cout << " No. Antrian : " << antrian.no[antrian.tail] << "/" << MAX << endl;
        cout << " Estimasi waktu personal meet & greet adalah 5 menit." << endl;
        cout << " Silahkan tunggu " << ((antrian.no[antrian.tail]*5)-5)-(nokel*5) << " menit lagi untuk tiba giliran anda" << endl;
        cout << " Terima Kasih" << endl;
    }
    else{
        cout << " antrian sudah penuh!" << endl;
    }
}

void dequeue() //mengambil antrian
{
    string dq = antrian.nama[antrian.head];
    int dqq = antrian.no[antrian.head];

    if(isEmpty() == 0){
        for(int i = antrian.head; i <= antrian.tail; i++){
            antrian.nama[i] = antrian.nama[i+1];
            antrian.no[i] = antrian.no[i+1];
        }
        antrian.tail--;
        cout << " Nama : " << dq << endl;
        cout << " Antrian No : " << dqq << endl;
        cout << " Telah Keluar" << endl;
        nokel++;

    }
    else{
        cout << " antrian masih kosong!" << endl;
    }
}

void clear()
{
    antrian.head = antrian.tail = -1;
    no=nokel=0;

    cout << "antrian clear!" << endl;
}

int main()
{
    int menu;
    string nama;
    create();
    do
    {
        system("cls");
        cout << " 1. Cetak no antrian" << endl;
        cout << " 2. Rilis antrian" << endl;
        cout << " 3. Reset antrian" << endl;
        cout << " 4. Exit" << endl;

        cout << "pilihan : ";
        cin  >> menu;

        switch(menu)
        {
        case 1:
            cout << "\nNama : ";
            cin.ignore();
            getline(cin, nama);
            enqueue(nama);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            clear();
            break;
        }

        system("pause");
    }
    while (menu != 4);

    return 0;
}

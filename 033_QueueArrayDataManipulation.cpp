#include <iostream>
#define MAX 5
using namespace std;

struct queue{
    string nama[MAX];
    int nilai[MAX];
    int head;
    int tail;
}antrian;

void create(){
    antrian.head= antrian.tail = -1;
}

int isEmpty(){
    if(antrian.tail==-1)
        return 1;
    else
        return 0;
}

int isFull(){
    if(antrian.tail==MAX-1)
        return 1;
    else
        return 0;
}

void enqueue(string nama, int nilai){
    if(isEmpty()== 1){
        antrian.head = antrian.tail=0;
        antrian.nama[antrian.tail] = nama;
        antrian.nilai[antrian.tail] = nilai;
        cout << " " << antrian.nama[antrian.tail] << " " << antrian.nilai[antrian.tail] << " masuk!" << endl;
    }
    else if(isFull()==0){
        antrian.tail++;
        antrian.nama[antrian.tail] = nama;
        antrian.nilai[antrian.tail] = nilai;
        cout << " " << antrian.nama[antrian.tail] << " " << antrian.nilai[antrian.tail] << " masuk!" << endl;
    }
    else{
        cout << " antrian sudah penuh!" << endl;
    }
}

void dequeue(){
    string dq=antrian.nama[antrian.head];
    int dqq=antrian.nilai[antrian.head];

    if(isEmpty()==0){
        for(int i=antrian.head; i<=antrian.tail;i++){
            antrian.nama[i]=antrian.nama[i+1];
            antrian.nilai[i]=antrian.nilai[i+1];
        }
        antrian.tail--;
        cout << " antrian depan terhapus." << endl;
        cout << " Nama terhapus  = " << dq << endl;
        cout << " Nilai terhapus = " << dqq << endl;
    }
    else{
        cout << " antrian masih kosong!" << endl;
    }
}

void display(){
    if(isEmpty()==0){
        for(int i=antrian.head;i<= antrian.tail; i++){
            cout << " " << antrian.nama[i] << " " << antrian.nilai[i] << endl;
        }
    }
    else{
        cout << " antrian masih kosong!" << endl;
    }
}

void jumlah()
{
    if (isEmpty() == 0)
    {
        int hitung;
        for (int i=antrian.head; i<=antrian.tail; i++)
        {
            cout << " " << antrian.nama[i] << " " << antrian.nilai[i] << endl;
            hitung++;
        }
        cout << " Banyaknya nilai saat ini adalah : " << hitung << endl;
    }
    else
    {
        cout << " antrean masih kosong!" << endl;
    }
}

void ratarata()
{
    if (isEmpty() == 0)
    {

        int total = 0;
        int banyak = 0;
        for (int i=antrian.head; i<=antrian.tail; i++)
        {
            total += antrian.nilai[i];
            banyak++;
        }
        float rata = total / banyak;
        cout << " Rata-rata nilai adalah : " << rata << endl;
    }
    else
    {
        cout << " antrean masih kosong!" << endl;
    }
}

void jumlahtotal()
{
    if (isEmpty() == 0)
    {
        int total;
        for (int i=antrian.head; i<=antrian.tail; i++)
        {
            total += antrian.nilai[i];
        }
        cout << " Jumlah nilai saat ini adalah : " << total << endl;
    }
    else
    {
        cout << " antrean masih kosong!" << endl;
    }
}

void clear(){
    antrian.head=antrian.tail=-1;
    cout << " Data clear" << endl;
}

int main(){
    int pil;
    string nama;
    int nilai;
    create();
    do{
        system("cls");
        cout << " 1. Tambah data" << endl;
        cout << " 2. Kurangi data" << endl;
        cout << " 3. Tampilkan seluruh data" << endl;
        cout << " 4. Jumlah data" << endl;
        cout << " 5. Rata-Rata nilai" << endl;
        cout << " 6. Jumlah total nilai dari data" << endl;
        cout << " 7. Clear" << endl;
        cout << " 8. Exit" << endl;
        cout << " Pilihan : ";
        cin >> pil;
        switch(pil){
        case 1:
            cout << " Nama  = ";
            cin.ignore();
            getline(cin, nama);
            cout << " Nilai = ";
            cin >> nilai;
            enqueue(nama, nilai);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            jumlah();
            break;
        case 5:
            ratarata();
            break;
        case 6:
            jumlahtotal();
            break;
        case 7:
            clear();
            break;
        }
        cout << endl;
        system("pause");
    }while(pil!=8);
    return 0;
}

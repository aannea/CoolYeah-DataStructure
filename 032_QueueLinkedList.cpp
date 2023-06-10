#include <iostream>

using namespace std;

struct antrian{
    int data;
    antrian *next;
};
antrian *head, *tail, *baru, *bantu, *hapus;

int hitungAntrian(){
    if(head == NULL){
        return 0;
    } else{
        int counter = 0;
        bantu = head;
        while(bantu != NULL){
            counter++;
            bantu = bantu -> next;
        }
        return counter;
    }
}

bool isEmpty(){
    if(hitungAntrian() == 0){
        return true;
    } else{
        return false;
    }
}

void enqueue(int data){
    if(isEmpty()){
        head = new antrian();
        head -> data = data;
        head -> next = NULL;
        tail = head;
        cout << " Berhasil menambahkan elemen baru" << endl;
    } else{
        baru = new antrian();
        baru -> data = data;
        baru -> next = NULL;
        tail -> next = baru;
        tail = baru;
        cout << " Berhasil menambahkan elemen baru" << endl;
    }
}

void dequeue(){
    if(isEmpty()){
        cout << " Antrian kosong" << endl;
    } else{
        hapus = head;
        head = head -> next;
        hapus -> next = NULL;
        delete hapus;
        cout << " Berhasil mengeluarkan elemen pertama" << endl;
    }
}

void display(){
    cout << " Data Antrian : " << endl;
    if(isEmpty()){
        cout << " Antrian kosong" << endl;
    } else{
        cout << " Jumlah data : " << hitungAntrian() << endl;
        bantu = head;
        while(bantu != NULL){
            cout << bantu ->data << endl;
            bantu = bantu -> next;
        }
    }
    cout << endl;
}

void clear(){
    if(isEmpty()){
        cout << " Antrian kosong" << endl;
    } else{
        head -> next = NULL;
        head = NULL;
        cout << " Menghapus seluruh data pada Queue" << endl;

        bantu = head;
        while(bantu != NULL){
            hapus = bantu;
            bantu = bantu -> next;
            hapus -> next = NULL;
            delete hapus;
        }
        head = NULL;
    }
}

int main()
{
    int pil;
    int data;

    do{
        system("cls");
        cout << " 1. Enqueue" << endl;
        cout << " 2. Dequeue" << endl;
        cout << " 3. Tampil" << endl;
        cout << " 4. Clear" << endl;
        cout << " 5. Exit" << endl;
        cout << " Pilihan : ";
        cin >> pil;

        switch(pil){
        case 1:
            cout << " Data = ";
            cin >> data;
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            clear();
            break;
        }
        cout << endl;
        system("pause");
    }
    while(pil !=5);
    return 0;
}

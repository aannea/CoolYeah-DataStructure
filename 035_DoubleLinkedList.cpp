#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head, *tail, *baru, *bantu, *bantu2, *hapus;

void init(){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
    if(head == NULL && tail == NULL)
        return 1;
    else
        return 0;
}

void create(int input){
    baru = new Node;
    baru->data = input;
    baru->next = NULL;
    baru->prev = NULL;
}

void insertDepan(int input){
    create(input);
    if(isEmpty()==1){
        head = baru;
        tail = baru;
    }
    else{
        baru->next = head;
        head->prev = baru;
        head = baru;
    }
}

void insertBelakang(int input){
    create(input);

    if(isEmpty()==1){
        head = baru;
        tail = baru;
    }
    else{
        tail->next = baru;
        baru->prev = tail;
        tail = baru;
    }
}

int countList(){
    int counter = 0;
    bantu = head;

    while(bantu != NULL){
        counter++;
        bantu = bantu->next;
    }
    return counter;
}

void insertTengah(int input, int posisi){
    create(input);
    if(posisi < 1 || posisi > countList()){
        cout << " Posisi di luar jangkauan!" << endl;
    }
    else if(posisi == 1){
        cout << " Posisi bukan posisi tengah!" << endl;
    }
    else{
        bantu = head;
        int counter = 1;
        while(counter < posisi-1){
            bantu = bantu->next;
            counter++;
        }
        bantu2 = bantu->next;
        baru->prev = bantu;
        baru->next = bantu2;
        bantu->next = baru;
        bantu2->prev = baru;
    }
}

void hapusDepan(){
    if(isEmpty()==0){
        hapus = head;
        head = head-> next;
        head->prev = NULL;
        delete hapus;
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

void hapusBelakang(){
    if(isEmpty()==0){
        hapus = tail;
        tail = tail-> prev;
        tail->next = NULL;
        delete hapus;
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

void hapusTengah(int posisi){
    if(isEmpty()==0){
        if(posisi < 1 || posisi > countList()){
            cout << " Posisi di luar jangkauan!" << endl;
        }
        else if(posisi == 1 || posisi == countList()){
            cout << " Posisi bukan posisi tengah!" << endl;
        }
        else{
            int counter = 1;
            bantu = head;
            while(counter < posisi-1){
                bantu = bantu-> next;
                counter++;
            }
            hapus = bantu->next;
            bantu2 = hapus->next;
            bantu->next = bantu2;
            bantu2->prev = bantu;
            delete hapus;
        }
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

void ubahDepan(int input){
    if(isEmpty()==0){
        head->data = input;
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

void ubahBelakang(int input){
    if(isEmpty()==0){
        tail->data = input;
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

void ubahTengah(int input, int posisi){
    if(isEmpty()==0){
        if(posisi < 1 || posisi > countList()){
            cout << " Posisi di luar jangkauan!" << endl;
        }
        else if(posisi == 1 || posisi == countList()){
            cout << " Posisi bukan posisi tengah!" << endl;
        }
        else{
            bantu = head;
            int counter = 1;
            while(counter < posisi){
                bantu = bantu->next;
                counter++;
            }
            bantu->data = input;
        }
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

void clearlist(){
    bantu = head;
    while(bantu!=NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << " List berhasil terhapus!" << endl;
}

void tampil(){
    bantu = head;
    if(isEmpty()==0){
        while(bantu!=NULL){
            cout << ends << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

int main()
{
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11,2);
    tampil();
    return 0;
}

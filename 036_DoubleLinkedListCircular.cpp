#include <iostream>

using namespace std;

///PROGRAM DOUBLE LINKED LIST CIRCULAR

struct Node
{
    string data;
    Node *next;
    Node *prev;
};

Node *head, *tail, *baru, *bantu, *bantu2, *hapus;

void init()
{
    head = NULL;
    tail = head;
}

int isEmpty()
{
    if (head == NULL && tail == NULL)
        return 1;
    else
        return 0;
}

void create(string input)
{
    baru = new Node;
    baru->data = input;
    baru->next = NULL;
    baru->prev = NULL;
}

void insertDepan(string input)
{
    create(input);

    if (isEmpty() == 1){
        head = baru;
        tail = head;
        head->prev = tail;
        tail->next = head;
    }
    else{
        baru->next = head;
        head->prev = baru;
        head = baru;
        head->prev = tail;
        tail->next = head;
    }
}

void insertBelakang(string input)
{
    create(input);

    if (isEmpty() == 1){
        head = baru;
        tail = head;
        head->prev = tail;
        tail->next = head;
    }
    else{
        baru->prev = tail;
        tail->next = baru;
        tail = baru;
        tail->next = head;
        head->prev = tail;
    }
}

void insertTengah(string input, int posisi)
{
    create(input);

    if (isEmpty() == 1){
        cout << " List masih kosong!" << endl;
    }
    else{
        if (posisi == 1){
            cout << " Posisi bukan posisi tengah!" << endl;
        }
        else if (posisi < 1){
            cout << " Posisi di luar jangkauan!" << endl;
        }
        else{
            int counter = 1;
            bantu = head;

            while (counter < posisi-1){
                bantu = bantu->next;
                counter++;
            }

            bantu2 = bantu->next;
            bantu->next = baru;
            bantu2->prev = baru;
            baru->prev = bantu;
            baru->next = bantu2;
        }
    }
}

void hapusDepan()
{
    if (isEmpty() == 0) {
        hapus = head;
        if (head == tail) {
            head = NULL;
            tail = NULL;
        } else {
            head = head->next;
            head->prev = tail;
            tail->next = head;
        }
        delete hapus;
    } else {
        cout << " List masih kosong!" << endl;
    }
}

void hapusBelakang()
{
    if (isEmpty() == 0) {
        hapus = tail;
        if (head == tail) {
            head = NULL;
            tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = head;
            head->prev = tail;
        }
        delete hapus;
    } else {
        cout << " List masih kosong!" << endl;
    }
}


void hapusTengah(int posisi)
{
    if (isEmpty() == 1){
        cout << " List masih kosong!" << endl;
    }
    else{
        if (posisi == 1){
            cout << " Posisi bukan posisi tengah!" << endl;
        }
        else if (posisi < 1){
            cout << " Posisi di luar jangkauan!" << endl;
        }
        else{
            int counter = 1;
            bantu = head;

            while (counter < posisi-1){
                bantu = bantu->next;
                counter++;
            }

            hapus = bantu->next;
            bantu2 = hapus->next;
            bantu->next = bantu2;
            bantu2->prev = bantu;
            delete hapus;
        }
    }
}

void clearList()
{   if (isEmpty() == 0){
        hapus = head;

        while (hapus->next != head){
            hapus = bantu;
            bantu = bantu->next;
            delete hapus;
        }
        head = NULL;
        tail = NULL;
    }
    cout << " List berhasil terhapus!" << endl;
}

void tampil()
{
    if (isEmpty() == 0){
        bantu = head;
        do{
            cout << ends << bantu->data << ends;
            bantu = bantu->next;
        }while (bantu != head);
        cout << endl;
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

int main()
{
    init();
    insertDepan("Ayam");
    insertDepan("Dino");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    insertBelakang("Garuda");
    tampil();
    insertBelakang("Domba");
    tampil();
    hapusBelakang();
    tampil();
    insertDepan("Babi");
    tampil();
    hapusDepan();
    tampil();
    insertTengah("Sapi", 2);
    tampil();
    hapusTengah(2);
    tampil();
    clearList();
    tampil();
    return 0;
}

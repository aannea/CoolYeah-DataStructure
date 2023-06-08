#include <iostream>

using namespace std;

struct Node{
    string nama;
    int nim;
    Node* next;
};

Node *head,*tail,*bantu,*newNode,*del;
int pilih;
char out;

void inputList(){
    string name;
    int angka;
    head = new Node;

    cin.ignore(1,'\n');
    cout << "Masukkan nama mahasiswa : ";
    getline(cin, name);
    cout << "Masukkan nim mahasiswa : ";
    cin >> angka;
    cin.ignore(1,'\n');
    cout <<endl;

    head -> nama = name;
    head -> nim = angka;


    head -> next = NULL;
    tail = head;
}

void tambahDepan(){
    string name;
    int angka;
    newNode = new Node;
    cin.ignore(1,'\n');
    cout << "Masukkan nama mahasiswa : ";
    getline(cin, name);
    cout << "Masukkan nim mahasiswa : ";
    cin >> angka;
    cin.ignore(1,'\n');
    cout <<endl;

    newNode -> nama = name;
    newNode -> nim = angka;

    newNode -> next = head;
    head = newNode;
}

void tambahBelakang(){
    string name;
    int angka;

    newNode = new Node;

    cin.ignore(1,'\n');
    cout << "Masukkan nama mahasiswa : ";
    getline(cin, name);

    cout << "Masukkan nim mahasiswa : ";
    cin >> angka;
    cin.ignore(1,'\n');
    cout <<endl;

    newNode -> nama = name;
    newNode -> nim = angka;


    tail -> next = newNode;
    newNode -> next = NULL;
    tail = newNode;
}

int panjangList(){
    Node* hitung;
    int jumlah = 0;
    hitung = head;
    while (hitung != NULL){
        hitung = hitung -> next;
        jumlah++;
    }
    return jumlah;
}

void tampil(){
    bantu = head;
    cout <<endl;
    cout << "ISI LIST :"<<endl;
    cout << "DATA MAHASISWA"<<endl;
    cout << "Nama"<<"\t"<<"NIM"<<endl;
    if (bantu != NULL){
        while (bantu != NULL){
            cout << bantu -> nama << "\t"<< bantu -> nim<<endl;
            bantu = bantu -> next;
        }
    }else {
        cout << "List kamu kosong"<<endl;
    }
    cout<<"\nPanjang list : " <<panjangList()<< "\n\n"<<endl;
}

void hapusData (){
    int posisi;
    if (head!=NULL){
        cout << "Masukkan posisi yang ingin dihapus :"<<ends;
        cin >> posisi;
        cin.ignore(1,'\n');

        if (posisi == 1){
            del = head;
            head = head -> next;
            delete del;
        }
        else if(posisi > 1 || posisi < panjangList()){
            Node* sebelum;
            int nomor = 1;
            bantu = head;
            while (nomor <= posisi){
                if(nomor == posisi-1){
                    sebelum = bantu;
                }
                if(nomor == posisi){
                    del = bantu;
                }
                bantu = bantu -> next;
                nomor++;
            }

            sebelum->next = bantu;
            delete del;
        }

        else if(posisi == panjangList()){
            if (head!=tail){
                del = tail;

                bantu = head;
                while (bantu -> next != tail ){
                    bantu = bantu ->next;
                }
                tail = bantu;
                tail-> next = NULL;
                delete del;
            }else {
                head = tail = NULL;
            }
        }
    }else{
        cout << "=====ALERT======\n"<<endl;
        cout << "List kamu kosong"<<endl;
        cout << "=====ALERT======\n"<<endl;
    }
}

int main(){

    menu:
    system("cls");
    cout << "PROGRAM SENARAI BERANTAI"<<endl;
    cout << "------------------------"<<endl;
    cout << "          MENU          "<<endl;
    cout << "------------------------"<<endl;
    cout << "1. Input List Baru"<<endl;
    cout << "2. Tambah Data Baru"<<endl;
    cout << "3. Tambah Data Depan Baru"<<endl;
    cout << "4. Hapus Data"<<endl;
    cout << "5. Tampil"<<endl;
    cout << "------------------------"<<endl;
    cout << "Pilih Menu :"<<ends;
    cin >> pilih;

    switch (pilih){
    case 1:
        inputList();
        system("pause");
        goto menu;
        break;
    case 2:
        tambahBelakang();
        system("pause");
        goto menu;
        break;
    case 3:
        tambahDepan();
        system("pause");
        goto menu;
        break;
    case 4:
        tampil();
        hapusData();
        tampil();
        system("pause");
        goto menu;
        break;
    case 5:
        tampil();
        system("pause");
        goto menu;
        break;
    default:
        return 0;
        break;
    }
}

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;
Node *tail;

void init (){
    head =NULL;
    tail= NULL;
}

bool isEmpty (){
    if (head == NULL)
        return true;
    else
        return false;
}

void insertDepan (int nilai){
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if(isEmpty()==true){
        head = tail = baru;
        tail->next = NULL;
    }else{
        baru->next = head;
        head =baru;
    }
}

void insertBelakang(int nilai){
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if(isEmpty()==true){
        head=tail=baru;
        tail->next=NULL;
    }
    else{
        tail->next=baru;
        tail=baru;
    }
}

int hitunglist(){
    Node *hitung;
    hitung=head;
    int jumlah=0;
    while(hitung != NULL){
        jumlah++;
        hitung=hitung->next;
    }
    return jumlah;
}

void insertTengah(int data, int posisi){
    if(posisi < 1 || posisi > hitunglist()){
        cout << "Posisi di luar jangkauan" << endl;
    }else if(posisi==1){
        cout << "Posisi bukan posisi tengah" << endl;
    }else{
        Node *baru, *bantu;
        baru=new Node();
        baru->data=data;

        bantu = head;
        int nomor =1;
        while(nomor<posisi-1){
            bantu=bantu->next;
            nomor++;
        }
        baru->next=bantu->next;
        bantu->next=baru;
    }
}

void hapusdepan(){
    Node *hapus;
    if(isEmpty()==false){
        if(head->next != NULL){
            hapus = head;
            head = head -> next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List Kosong!" << endl;
    }
}

void hapusbelakang(){
    Node *hapus;
    Node *bantu;

    if(isEmpty()==false){
        if(head !=tail){
            hapus=tail;
            bantu=head;
            while(bantu->next != tail){
                bantu =bantu->next;
            }
            tail=bantu;
            tail->next=NULL;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}

void hapustengah(int posisi){
    Node *bantu,*hapus, *sebelum;

    if(posisi<1 || posisi > hitunglist()){
        cout << "Posisi diluar jangkauan "<<endl;
    }else if(posisi ==1){
        cout << "Posisi bukan posisi tengah"<<endl;
    }else {
        int nomor =1;
        bantu =head;
        while (nomor <= posisi){
            if(nomor == posisi-1){
                sebelum = bantu;
            }
            if(nomor == posisi){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        sebelum->next = bantu;
        delete hapus;
    }
}

void ubahdepan(int data){
    if(isEmpty() == 0){
        head->data = data;
    }
    else {
        cout << "List masih Kosong!" << endl;
    }
}

void ubahtengah (int data,int posisi){
    Node* bantu;

    if(isEmpty() == 0){
        if(posisi<1 || posisi > hitunglist()){
            cout << "Posisi di luar jangkauan"<<endl;
        }else if (posisi == 1){
            cout << "Posisi bukan posisi tengah"<<endl;
        }else {
            bantu = head;
            int nomor =1;
            while (nomor < posisi){
                bantu = bantu ->next;
                nomor++;
            }
            bantu ->data = data;
        }
    }else{
        cout << "List masih kosong!"<<endl;
    }
}

void ubahbelakang(int data){
    if(isEmpty()==0){
        tail->data=data;
    }else{
    cout << "List masih kosong!" << endl;
    }
}

void clearlist(){
    Node *bantu, *hapus;
    bantu=head;
    while(bantu!=NULL){
        hapus=bantu;
        bantu=bantu->next;
        delete hapus;
    }
    head=tail=NULL;
    cout << "List berhasi terhapus" << endl;
}

void tampil(){
    Node *bantu;
    bantu =head;
    if(isEmpty()==false){
        while(bantu!=NULL){
            cout << bantu->data << ends;
            bantu =bantu->next;
        }
        cout << endl;
    }else{
        cout << "List masih kososng!" << endl;
    }
}

int main(){
    init();
    int menu;
    int databaru;
    do{
        header();
        cout << "1. Insert Depan"<<endl;
        cout << "2. Insert Belakang"<<endl;
        cout << "3. Hapus Depan"<<endl;
        cout << "4. Hapus Belakang"<<endl;
        cout << "5. Tampilkan List"<<endl;
        cout << "6. Hapus Semua"<<endl;
        cout << "7. Exit"<<endl;
        cout << "Masukkan Pilihan :";cin >> menu;
        switch(menu){
            case 1:
                cout << "Masukkan Data :";cin >> databaru;
                insertDepan(databaru);
                system("pause");
                break;
            case 2:
                cout << "Masukkan Data :";cin >> databaru;
                insertBelakang(databaru);
                system("pause");
                break;
            case 3:
                hapusdepan();
                system("pause");
                break;
            case 4:
                hapusbelakang();
                system("pause");
                break;
            case 5:
                tampil();
                system("pause");
                break;
            case 6:
                clearlist();
                system("pause");
                break;
            case 7:
                system("exit");
                break;
            default: cout << "Masukkan Salah\n";
                    system("pause");
        }
    }while(menu!=7);

    return 0;
}

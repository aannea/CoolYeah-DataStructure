#include <iostream>

using namespace std;

struct Node
{
    string nama;
    int nilai;
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

void create(string nama, int nilai)
{
    baru = new Node;
    baru->nama = nama;
    baru->nilai = nilai;
    baru->next = NULL;
    baru->prev = NULL;
}

void insertDepan(string nama, int nilai)
{
    create(nama, nilai);

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

void insertTengah(string nama, int nilai, int posisi)
{
    create(nama, nilai);

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

void insertBelakang(string nama, int nilai)
{
    create(nama, nilai);

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

void ubahDepan(string nama, int nilai)
{
    if (isEmpty() == 0){
        head->nama = nama;
        head->nilai = nilai;
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

void ubahTengah(string nama, int nilai, int posisi)
{
    if(isEmpty()==0){
        if (posisi == 1){
            cout << " Posisi bukan posisi tengah!" << endl;
        }
        else if (posisi < 1){
            cout << " Posisi di luar jangkauan!" << endl;
        }
        else{
            int counter = 1;
            bantu = head;

            while (counter < posisi){
                bantu = bantu->next;
                counter++;
            }
            bantu->nama = nama;
            bantu->nilai = nilai;
        }
    }
    else{
        cout << " List masih kosong" <<endl;
    }
}

void ubahBelakang(string nama, int nilai)
{
    if (isEmpty() == 0){
        tail->nama = nama;
        tail->nilai = nilai;
    }
    else{
        cout << " List masih kosong!" << endl;
    }
}

void hapusDepan()
{
    if (isEmpty() == 0){
        hapus = head;
        tail = head;
        if (hapus->next == head){
            head = NULL;
            tail = NULL;
            delete hapus;
        }
        else{
            while (tail->next != hapus){
                tail = tail->next;
            }
            head = head->next;
            tail->next = head;
            hapus->next = NULL;
            delete hapus;
            cout << " Data terhapus" << endl;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}

void hapusBelakang()
{
    if (isEmpty() == 0){
        hapus = head;
        tail = head;

        if (hapus->next == head){
            head = NULL;
            tail = NULL;
            delete hapus;
        }
        else{
            while (hapus->next != head){
                hapus = hapus->next;
            }
            while (tail->next != hapus){
                tail = tail->next;
            }
            tail->next = head;
            hapus->next = NULL;
            delete hapus;
            cout << " Data terhapus" << endl;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
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
            cout << " Data terhapus" << endl;
        }
    }
}

void tampil()
{
    int hitung = 0;
    if (isEmpty() == 0){
        bantu = tail;
        do{
            hitung++;
            cout << " " << hitung << ". ";
            cout << " Nama = " << bantu->nama << ", Nilai = " << bantu->nilai << endl;
            bantu = bantu->prev;
        }while (bantu != tail);
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}

void cari(string nama){
    bantu = head;
    int Ketemu = 0;
    int i = 0;

    if(isEmpty() == NULL){
        while(isEmpty() == NULL){
            i++;
            if(bantu->nama == nama ){
                Ketemu++;
                break;
            }
            bantu = bantu->next;
        }
        if ( Ketemu == 1){
            cout << " " << nama << " Ditemukan di list ke-" << i << endl;
            cout << " Dengan nilai " << bantu->nilai << endl;
        } else{
            cout << " " << nama << " Tidak ada di dalam list " << endl;
        }
    } else{
        cout << " List masih kosong";
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
    cout << "List berhasil terhapus!" << endl;
}

int main()
{
    init();
    int pilih, nilai, posisi;
    string nama;
    do{
        system("cls");
        cout << " ===MENU===" << endl;
        cout << " 1. Input Depan" << endl;
        cout << " 2. Input Tengah" << endl;
        cout << " 3. Input Belakang" << endl;
        cout << " 4. Ubah Depan" << endl;
        cout << " 5. Ubah Tengah" << endl;
        cout << " 6. Ubah Belakang" << endl;
        cout << " 7. Hapus Depan" << endl;
        cout << " 8. Hapus Tengah" << endl;
        cout << " 9. Hapus Belakang" << endl;
        cout << " 10. Tampilkan Semua data" << endl;
        cout << " 11. Cari data" << endl;
        cout << " 12. Hapus List" << endl;
        cout << " 13. Keluar" << endl << endl;
        cout << " Pilih menu : ";
        cin >> pilih;

        switch(pilih){
        case 1:
            cout << " Nama  = ";
            cin.ignore();
            getline(cin, nama);
            cout << " Nilai = ";
            cin >> nilai;
            insertDepan(nama, nilai);
            break;
        case 2:
            cout << " Posisi = ";
            cin >> posisi;
            cout << " Nama  = ";
            cin.ignore();
            getline(cin, nama);
            cout << " Nilai = ";
            cin >> nilai;
            insertTengah(nama, nilai, posisi);
            break;
        case 3:
            cout << " Nama  = ";
            cin.ignore();
            getline(cin, nama);
            cout << " Nilai = ";
            cin >> nilai;
            insertBelakang(nama, nilai);
            break;
        case 4:
            cout << " Nama  = ";
            cin.ignore();
            getline(cin, nama);
            cout << " Nilai = ";
            cin >> nilai;
            ubahDepan(nama, nilai);
            break;
        case 5:
            cout << " Posisi = ";
            cin >> posisi;
            cout << " Nama  = ";
            cin.ignore();
            getline(cin, nama);
            cout << " Nilai = ";
            cin >> nilai;
            ubahTengah(nama, nilai, posisi);
            break;
        case 6:
            cout << " Nama  = ";
            cin.ignore();
            getline(cin, nama);
            cout << " Nilai = ";
            cin >> nilai;
            ubahBelakang(nama, nilai);
            break;
        case 7:
            hapusDepan();
            break;
        case 8:
            cout << " Posisi = ";
            cin >> posisi;
            hapusTengah(posisi);
            break;
        case 9:
            hapusBelakang();
            break;
        case 10:
            tampil();
            break;
        case 11:
            cout << " Cari Nama = ";
            cin.ignore();
            getline(cin, nama);
            cari(nama);
            break;
        case 12:
            clearList();
            break;
        default:
            return 0;
            break;
        }
        cout << endl;
        system("pause");
    }while(pilih<13);
    return 0;
}

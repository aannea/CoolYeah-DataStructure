#include <iostream>

using namespace std;

/// PROGRAM STACK DENGAN SINGLE LINKED LIST
struct Node
{
    int data;
    Node *link;
};
Node *top = NULL;

int isEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

// Insert Data (Push)
void push(int nilai)
{
    Node *ptr = new Node();
    ptr->data = nilai;
    ptr->link = top;
    top = ptr;
    cout << " Data " << nilai << " telah dimasukkan" << endl;
}

// Hapus Data (Pop)
void pop()
{
    if (isEmpty() == 1)
        cout << " Stack masih kosong!" << endl;
    else
    {
        Node *ptr = top;
        top = top->link;
        cout << " Data " << ptr->data << " terambil" << endl;
        delete (ptr);
    }
}

// Tampilkan data teratas (Top)
void showTop()
{
    if (isEmpty() == 1)
        cout << " Stack masih kosong!" << endl;
    else
        cout << " Data teratas (top) : " << top->data << endl;
}

// Hapus Stack
void clearStack()
{
    Node *bantu, *hapus;
    bantu = top;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->link;
        delete hapus;
    }
    top = NULL;
    cout << "Stack berhasil terhapus!" << endl;
}

// Tampilkan Stack
void displayStack()
{
    if (isEmpty() == 1)
        cout << " Stack masih kosong!" << endl;
    else
    {
        Node *temp = top;
        while (temp != NULL)
        {
            cout << " " << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
}

int main()
{
    int pilihan, nilai;
    do
    {
        system("cls");
        cout << "=== Menu ===" << endl;
        cout << " 1. Memasukkan data (Push)" << endl;
        cout << " 2. Menghapus data (Pop)" << endl;
        cout << " 3. Menampilkan data teratas (Top)" << endl;
        cout << " 4. Menampilkan data" << endl;
        cout << " 5. Hapus Stack" << endl;
        cout << " 6. Keluar" << endl;
        cout << " Masukkan pilihan: ";
        cin >> pilihan;
        cout << endl;
        if (pilihan == 1)
        {
            cout << " Masukkan data: ";
            cin >> nilai;
            push(nilai);
        }
        else if (pilihan == 2)
        {
            pop();
        }
        else if (pilihan == 3)
        {
            showTop();
        }
        else if (pilihan == 4)
        {
            displayStack();
        }
        else if (pilihan == 5)
        {
            clearStack();
        }
        else
        {
            return 0;
        }
        cout << endl;
        system("pause");
    } while (pilihan != 6);
    return 0;
}

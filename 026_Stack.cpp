#include <iostream>
#define MAX 5

using namespace std;

struct stack{
    int top;
    int data[MAX];
}myStack;

void initStack(){
    myStack.top=-1;
}
int isEmpty(){
    if(myStack.top==-1)
        return 1;
    else
        return 0;
}

int isFull(){
    if(myStack.top==MAX-1)
        return 1;
    else
        return 0;
}

void push(int data){
    if (isEmpty()==1){
        myStack.top++;
        myStack.data[myStack.top]=data;
        cout << " Data " << data << " Telah dimasukkan" << endl;
    }
    else if(isFull()==0){
        myStack.top++;
        myStack.data[myStack.top]=data;
        cout << " Data " << data << " Telah dimasukkan" << endl;
    }
    else{
        cout << " Stack penuh!" << endl;
    }
}

void pop(){
    if(isEmpty()==0){
        myStack.top--;
        cout << " Data Teratas terambil" << endl;
    }
    else{
        cout << " Stack masih kosong!" << endl;
    }
}

void top(){
    if(isEmpty()==0){
        cout << " " << myStack.data[myStack.top] << endl;
    }
    else{
        cout << " Stack masih kosong!" << endl;
    }
}

void display(){
    if(isEmpty()==0){
        for (int i = myStack.top; i>=0; i--){
            cout << " " << myStack.data[i] << endl;
        }
    }
    else{
        cout << " Stack masih kosong!" << endl;
    }
}

void clear(){
    myStack.top=-1;
    cout << " Stack berhasil dihapus" << endl;
}

int main()
{
    int pilihan, nilai;

    initStack();
    do{
        system("cls");
        cout << "=== Menu ===" << endl;
        cout << " 1. Memasukkan data (Push)" << endl;
        cout << " 2. Menghapus data (Pop)" << endl;
        cout << " 3. Menampilkan data teratas (Top)" <<endl;
        cout << " 4. Menampilkan data" << endl;
        cout << " 5. Hapus Stack" << endl;
        cout << " 6. Keluar" << endl;
        cout << " Masukkan pilihan : ";
        cin >> pilihan;
        cout << endl;

        if(pilihan==1){
            cout << "Masukkan data: ";
            cin >> nilai;
            push(nilai);
        }
        else if(pilihan==2){
            pop();
        }
        else if(pilihan==3){
            top();
        }
        else if(pilihan==4){
            display();
        }
        else if(pilihan==5){
            clear();
        }
        else{
            return 0;
        }
        cout << endl;
        system("pause");
    }
    while (pilihan!=6);

    return 0;
}

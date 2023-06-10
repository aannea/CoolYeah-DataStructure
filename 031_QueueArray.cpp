#include <iostream>
#define MAX 5
using namespace std;

struct queue{
    int data[MAX];
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

void enqueue(int data){
    if(isEmpty()== 1){
        antrian.head = antrian.tail=0;
        antrian.data[antrian.tail] = data;
        cout << " " << antrian.data[antrian.tail] << " masuk!" << endl;
    }
    else if(isFull()==0){
        antrian.tail++;
        antrian.data[antrian.tail] = data;
        cout << " " << antrian.data[antrian.tail] << " masuk!" << endl;
    }
    else{
        cout << " antrian sudah penuh!" << endl;
    }
}

void dequeue(){
    int dq=antrian.data[antrian.head];

    if(isEmpty()==0){
        for(int i=antrian.head; i<=antrian.tail;i++){
            antrian.data[i]=antrian.data[i+1];
        }
        antrian.tail--;
        cout << " antrian depan terhapus." << endl;
        cout << " data terhapus = " << dq << endl;
    }
    else{
        cout << " antrian masih kosong!" << endl;
    }
}

void clear(){
    antrian.head=antrian.tail=-1;
    cout << " Data clear" << endl;
}

void display(){
    if(isEmpty()==0){
        for(int i=antrian.head;i<= antrian.tail; i++){
            cout << " " << antrian.data[i] << endl;
        }
    }
    else{
        cout << " antrian masih kosong!" << endl;
    }
}

int main(){
    int pil;
    int data;
    create();
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
    }while(pil!=5);
    return 0;
}

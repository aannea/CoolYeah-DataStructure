#include <iostream>
#include <windows.h>
using namespace std;

struct Pohon
{
    char data;
    Pohon *left, *right, *parent;
};

Pohon *root, *baru, *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;;

void init()
{
    root = NULL;
}

int isEmpty()
{
    if (root == NULL)
        return 1;
    else
        return 0;
}

void buatNode(char data)
{
    if(isEmpty() == 1){
        root = new Pohon();
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "\nNode " << data << " berhasil dibuat menjadi root." << endl;
    }
    else{
        cout << "\nPohon sudah dibuat" << endl;
    }
}

Pohon *insertLeft(char data, Pohon *node)
{
    if(isEmpty() == 1){
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    }else{
        if( node->left != NULL ){
            cout << "\nNode "<< node->data << " sudah ada child kiri!" << endl;
            return NULL;
        }else{
            baru = new Pohon();
            baru->data = data;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->left = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << baru->parent->data << endl;
            return baru;
        }
    }
}

Pohon *insertRight(char data, Pohon *node)
{
    if(root == NULL){
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    }else{
        if(node->right != NULL){
            cout << "\nNode " << node->data << " sudah ada child kanan!" << endl;
            return NULL;
        }else{
            baru = new Pohon();
            baru->data = data;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->right = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << baru->parent->data << endl;
            return baru;
        }
    }
}

void update(char data, Pohon *node)
{
    if(isEmpty() == 1){
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }else{
        if(!node)
            cout << "\nNode yang ingin diganti tidak ada!!" << endl;
        else{
            char temp = node->data;
            node->data = data;
            cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
        }
    }
}

void retrieve(Pohon *node = root)
{
    if(!root){
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }else{
            if(node != NULL){
                cout << "  " << node->data << ", ";
                retrieve(node->left);
                retrieve(node->right);
            }
    }
}

void find(Pohon *node)
{
    if(!root){
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }else{
        if(!node)
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        else{
            cout << "\nFind Node : " << node->data << endl;
            cout << "Root : " << root->data << endl;
            if(!node->parent)
                cout << "Parent : (tidak punya parent)" << endl;
            else
                cout << "Parent : " << node->parent->data << endl;
            if(node->parent != NULL && node->parent->left != node && node->parent->right == node)
                cout << "Sibling : " << node->parent->left->data << endl;
            else if(node->parent != NULL && node->parent->right != node &&
                    node->parent->left == node)
                cout << "Sibling : " << node->parent->right->data << endl;
            else
                cout << "Sibling : (tidak punya sibling)" << endl;
            if(!node->left)
                cout << "Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << "Child Kiri : " << node->left->data << endl;
            if(!node->right)
                cout << "Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << "Child Kanan : " << node->right->data << endl;
        }
    }
}

void preOrder(Pohon *node = root)
{
    if(!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else{

        if(node != NULL){
            cout << " " << node->data << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}

void inOrder(Pohon *node = root)
{
    if(!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else{
        if(node != NULL){
            inOrder(node->left);
            cout << " " << node->data << ", ";
            inOrder(node->right);
        }
    }
}

void postOrder(Pohon *node = root)
{
    if(!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else{
        if(node != NULL){
            postOrder(node->left);
            postOrder(node->right);
            cout << " " << node->data << ", ";
        }
    }
}

void deleteTree(Pohon *node)
{
    if(!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else{
        if(node != NULL){
            if(node != root){
                node->parent->left = NULL;
                node->parent->right = NULL;
            }
            deleteTree(node->left);
            deleteTree(node->right);

            if(node == root){
                delete root;
                root = NULL;
            }else{
                delete node;
            }
        }
    }
}

void deleteSub(Pohon *node){
    if(!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else{
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "\n Node subtree " << node->data << " berhasil dihapus."  << endl;
    }
}

void clear(){
    if(!root)
        cout << "\n Buat tree terlebih dahulu!!" << endl;
    else{
        deleteTree(root);
        cout << "\n Pohon berhasil dihapus."  << endl;
    }
}

int size(Pohon *node = root){
    if(!root){
        cout << "\n Buat tree terlebih dahulu!!" << endl;
        return 0;
    }else{

        if(!node){
            return 0;
        }else{
            return 1 + size(node->left) + size(node->right);
        }

    }
}

int height(Pohon *node = root)
{
    if(!root){
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return 0;
    }else{
        if(!node){
            return 0;
        }else{
            int heightKiri = height(node->left);
            int heightKanan = height(node->right);

            if(heightKiri >= heightKanan){
                return heightKiri + 1;
            }else{
                return heightKanan + 1;
            }

        }
    }
}

void charateristic()
{
    cout << "\nSize Tree : " << size() << endl;
    cout << "Height Tree : " << height() << endl;
    cout << "Average Node of Tree : " << size() / height() << endl;
}

void menu (){
    cout << " 1. Tambah Data Tree" << endl;
    cout << " 2. Lihat Tree" << endl;
    cout << " 3. Update Tree" << endl;
    cout << " 4. Hapus Data" << endl;
    cout << " 5. Cari Tree" << endl;
    cout << " 6. Exit" << endl;
}

void menu2 (){
    cout << " 1. Pre Order" << endl;
    cout << " 2. In Order" << endl;
    cout << " 3. Post Order" << endl;
}

void menuhapus(){
    cout << " 1. Hapus Node Pohon" << endl;
    cout << " 2. Hapus Subtree" << endl;
    cout << " 3. Hapus Seluruh Pohon" << endl;
}

int main()
{
    int masukan, y = 0;;
    char masukanupdate, masukan1, masukan2, masukan3, masukan4, masukan5, masukan6, masukan7, masukan8, masukan9, masukan10, masukan11;
    do {
    menu();
    cout << "Masukan Pilihan : ";
    cin >> masukan;
        switch (masukan){
            case 1:
                system("cls");
                cout << "=====Tambah Data Tree====="<< endl;
                cout << "\nMasukan sebagai root : ";
                cin >> masukan1;
                buatNode(masukan1);
                cout << "Masukan huruf ke kiri dari " << masukan1 << ": ";
                cin >> masukan2;
                nodeB = insertLeft(masukan2, root);
                cout << "Masukan huruf ke kanan dari " << masukan1 << ": ";
                cin >> masukan3;
                nodeC = insertRight(masukan3, root);
                cout << "Masukan huruf ke kiri dari " << masukan2 << ": ";
                cin >> masukan4;
                nodeD = insertLeft(masukan4, nodeB);
                cout << "Masukan huruf ke kanan dari " << masukan2 << ": ";
                cin >> masukan5;
                nodeE = insertRight(masukan5, nodeB);
                cout << "Masukan huruf ke kiri dari " << masukan2 << ": ";
                cin >> masukan6;
                nodeF = insertLeft(masukan6, nodeC);
                cout << "Masukan huruf ke kanan dari " << masukan3 << ": ";
                cin >> masukan7;
                nodeG = insertRight(masukan7, nodeC);
                cout << "Masukan huruf ke kiri dari " << masukan5 << ": ";
                cin >> masukan8;
                nodeH = insertLeft(masukan8, nodeE);
                cout << "Masukan huruf ke kanan dari " << masukan5 << ": ";
                cin >> masukan9;
                nodeI = insertRight(masukan9, nodeE);
                cout << "Masukan huruf ke kiri dari " << masukan7 << ": ";
                cin >> masukan10;
                nodeJ = insertLeft(masukan10, nodeG);
                y = 1;
                break;
            case 2:
                if(y!= 1){
                    cout << "Data tree tidak ada" << endl;
                } else {
                    system("cls");
                    cout << "==========Tampil=========="<< endl;
                    menu2();
                    cout << "Pilihan : ";
                    cin >> masukan;
                    switch(masukan){
                        case 1:
                            preOrder(root);
                            break;
                        case 2:
                            inOrder(root);
                            break;
                        case 3:
                            postOrder(root);
                            break;
                        default:
                            cout << "Masukan anda salah" << endl;
                    }
                    cout << "\n" << endl;
                    charateristic();
                }
                break;
            case 3:
                if (y!= 1){
                    cout << "Data tree tidak tersedia" << endl;
                } else {
                    system("cls");
                    cout << "==========Update=========="<< endl;
                    retrieve(root);
                    cout << "\nTree yang di update : ";
                    cin >> masukanupdate;
                    if (masukanupdate == masukan1){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, root);
                    }
                    else if (masukanupdate == masukan2){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeB);
                    }
                    else if (masukanupdate == masukan3){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeC);
                    }
                    else if (masukanupdate == masukan4){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeD);
                    }
                    else if (masukanupdate == masukan5){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeE);
                    }
                    else if (masukanupdate == masukan6){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeF);
                    }
                    else if (masukanupdate == masukan7){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeG);
                    }
                    else if (masukanupdate == masukan8){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeH);
                    }
                    else if (masukanupdate == masukan9){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeI);
                    }
                    else if (masukanupdate == masukan10){
                        cout << "Ganti : ";
                        cin >> masukanupdate;
                        update(masukanupdate, nodeJ);
                    } else {
                        cout << "Data tree tidak ada" << endl;
                    }
                }
                break;
            case 4:
                if (y!= 1){
                    cout << "Data tree tidak ada" << endl;
                } else {
                    system("cls");
                    cout << "==========Hapus Data========="<< endl;
                    menuhapus();
                    cout << "Data yang ingin di hapus : ";
                    cin >> masukan;
                    switch (masukan){
                        case 1:
                            system("cls");
                            retrieve(root);
                            cout << "\nNode yang akan di hapus : ";
                            cin >> masukanupdate;
                            if (masukanupdate == masukan1){
                                deleteTree(root);
                            }
                            else if (masukanupdate == masukan2){
                                deleteTree(nodeB);
                            }
                            else if (masukanupdate == masukan3){
                                deleteTree(nodeC);
                            }
                            else if (masukanupdate == masukan4){
                                deleteTree(nodeD);
                            }
                            else if (masukanupdate == masukan5){
                                deleteTree(nodeE);
                            }
                            else if (masukanupdate == masukan6){
                                deleteTree(nodeF);
                            }
                            else if (masukanupdate == masukan7){
                                deleteTree(nodeG);
                            }
                            else if (masukanupdate == masukan8){
                                deleteTree(nodeH);
                            }
                            else if (masukanupdate == masukan9){
                                deleteTree(nodeI);
                            }
                            else if (masukanupdate == masukan10){
                                deleteTree(nodeJ);
                            } else {
                                cout << "Data tree tidak ada" << endl;
                            }

                            break;
                        case 2:
                            system("cls");
                            retrieve(root);
                            cout << "\nSubtree yang ingin di hapus : ";
                            cin >> masukanupdate;
                            if (masukanupdate == masukan1){
                                deleteSub(root);
                                cout << root << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan2){
                                deleteSub(nodeB);
                                cout << nodeB << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan3){
                                deleteSub(nodeC);
                                cout << nodeC << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan4){
                                deleteSub(nodeD);
                                cout << nodeD << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan5){
                                deleteSub(nodeE);
                                cout << nodeE << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan6){
                                deleteSub(nodeF);
                                cout << nodeF << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan7){
                                deleteSub(nodeG);
                                cout << nodeG << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan8){
                                deleteSub(nodeH);
                                cout << nodeH << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan9){
                                deleteSub(nodeI);
                                cout << nodeI << "ter hapus" << endl;
                            }
                            else if (masukanupdate == masukan10){
                                deleteSub(nodeJ);
                                cout << nodeJ << "ter hapus" << endl;
                            } else {
                                cout << "Data tree tidak ada" << endl;
                            }
                            break;
                        case 3:
                            system("cls");
                            clear();
                            cout << "Tree telah terhapus" << endl;
                            break;
                        default:
                            cout << "Data tree tidak ada" << endl;
                        }
                }
                break;
            case 5:
                if (y!= 1){
                    cout << "Data tree tidak ada" << endl;
                } else {
                    system("cls");
                    cout << "==========Cari Tree=========="<< endl;
                    retrieve(root);
                    cout << "\nMasukan node yang ingin dicari : ";
                    cin >> masukanupdate;
                    if (masukanupdate == masukan1){
                        find(root);
                    }
                    else if (masukanupdate == masukan2){
                        find(nodeB);
                    }
                    else if (masukanupdate == masukan3){
                        find(nodeC);
                    }
                    else if (masukanupdate == masukan4){
                        find(nodeD);
                    }
                    else if (masukanupdate == masukan5){
                        find(nodeE);
                    }
                    else if (masukanupdate == masukan6){
                        find(nodeF);
                    }
                    else if (masukanupdate == masukan7){
                        find(nodeG);
                    }
                    else if (masukanupdate == masukan8){
                        find(nodeH);
                    }
                    else if (masukanupdate == masukan9){
                        find(nodeI);
                    }
                    else if (masukanupdate == masukan10){
                        find(nodeJ);
                    } else {
                        cout << "Data tree tidak ada" << endl;
                    }

                }
                break;
            case 6:
                system("cls");
                cout << "Terima kasih" << endl;
                break;
            default:
                cout << "Data tree tidak ada" << endl;
        }
        system("pause");
        system("cls");
    } while (masukan != 6);
    return 0;
}

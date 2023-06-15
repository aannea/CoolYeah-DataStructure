#include <iostream>

using namespace std;

struct Pohon
{
    char data;
    Pohon *left, *right, *parent;
};

Pohon *root, *baru;

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
        cout << "\n Node " << data << " berhasil dibuat menjadi root." << endl;
    }
    else{
        cout << "\n Pohon sudah dibuat" << endl;
    }
}

Pohon *insertLeft(char data, Pohon *node)
{
    if(isEmpty() == 1){
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL;
    }else{
        if( node->left != NULL ){
            cout << "\n Node "<< node->data << " sudah ada child kiri!" << endl;
            return NULL;
        }else{
            baru = new Pohon();
            baru->data = data;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->left = baru;
            cout << "\n Node " << data << " berhasil ditambahkan ke child kiri " << baru->parent->data << endl;
            return baru;
        }
    }
}

Pohon *insertRight(char data, Pohon *node)
{
    if(root == NULL){
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL;
    }else{
        if(node->right != NULL){
            cout << "\n Node " << node->data << " sudah ada child kanan!" << endl;
            return NULL;
        }else{
            baru = new Pohon();
            baru->data = data;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->right = baru;
            cout << "\n Node " << data << " berhasil ditambahkan ke child kanan " << baru->parent->data << endl;
            return baru;
        }
    }
}

void update(char data, Pohon *node)
{
    if(isEmpty() == 1){
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }else{
        if(!node)
            cout << "\n Node yang ingin diganti tidak ada!!" << endl;
        else{
            char temp = node->data;
            node->data = data;
            cout << "\n Node " << temp << " berhasil diubah menjadi " << data << endl;
        }
    }
}

void retrieve(Pohon *node)
{
    if(!root){
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }else{
        if(!node)
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        else{
            cout << "\n Data node : " << node->data << endl;
        }
    }
}

void find(Pohon *node)
{
    if(!root){
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }else{
        if(!node)
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        else{
            cout << "\n Find Node : " << node->data << endl;
            cout << " Root : " << root->data << endl;

            if(!node->parent)
                cout << " Parent : (tidak punya parent)" << endl;
            else
                cout << " Parent : " << node->parent->data << endl;


            if(node->parent != NULL && node->parent->left != node && node->parent->right == node)

                cout << " Sibling : " << node->parent->left->data << endl;

            else if(node->parent != NULL && node->parent->right != node &&
                    node->parent->left == node)

                cout << " Sibling : " << node->parent->right->data << endl;

            else

                cout << " Sibling : (tidak punya sibling)" << endl;


            if(!node->left)
                cout << " Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << " Child Kiri : " << node->left->data << endl;

            if(!node->right)
                cout << " Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << " Child Kanan : " << node->right->data << endl;
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
    cout << "\n Size Tree : " << size() << endl;
    cout << " Height Tree : " << height() << endl;
    cout << " Average Node of Tree : " << size() / height() << endl;
}

int main()
{
    buatNode('A');

    Pohon *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;

    nodeB = insertLeft('B', root);
    nodeC = insertRight('C', root);
    nodeD = insertLeft('D', nodeB);
    nodeE = insertRight('E', nodeB);
    nodeF = insertLeft('F', nodeC);
    nodeG = insertLeft('G', nodeE);
    nodeH = insertRight('H', nodeE);
    nodeI = insertLeft('I', nodeG);
    nodeJ = insertRight('J', nodeG);

    update('Z', nodeC);
    update('C', nodeC);

    retrieve(nodeC);

    find(root);

    cout << "\n PreOrder :" << endl;
    preOrder(root);
    cout << "\n" << endl;
    cout << " InOrder :" << endl;
    inOrder(root);
    cout << "\n" << endl;
    cout << " PostOrder :" << endl;
    postOrder(root);
    cout << "\n" << endl;

    charateristic();

    deleteSub(nodeE);
    cout << "\n PreOrder :" << endl;
    preOrder();
    cout << "\n" << endl;

    charateristic();

}

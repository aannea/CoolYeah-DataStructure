#include <iostream>
#include <string>

using namespace std;

int jumlahSimpul = 5;
string *dataSimpul;
int **dataBusur;
bool cekMatriks = false;

struct Graph
{
    string data;
    Graph *kanan;
    Graph *kiri;
};

Graph *simpul, *busur, *awal, *akhir, **alamat, *bantu, *bantu2;

void init()
{
    awal = NULL;
    akhir = NULL;
}

int isEmpty()
{
    if (awal == NULL && akhir == NULL)
    return 1;
    else
    return 0;
}

void buatMatriks()
{
    dataSimpul = new string[jumlahSimpul];
    dataBusur = new int*[jumlahSimpul];
    dataBusur[0] = new int[jumlahSimpul * jumlahSimpul];
    for (int i = 1; i < jumlahSimpul; i++){
        dataBusur[i] = dataBusur[i-1] + jumlahSimpul;
    }
    cout << " Silahkan masukkan nama kota" <<endl;
    for (int i = 0; i < jumlahSimpul; i++){
        cout << " Kota " <<i+1<< " : ";
        cin >> dataSimpul[i];
    }
    cout << " Silahkan masukkan bobot antar kota" << endl;
    for (int m = 0; m < jumlahSimpul; m++){
        for (int n = 0; n < jumlahSimpul; n++){
            cout << " " << dataSimpul[m] << " --> " << dataSimpul[n] << " : ";
            cin >> dataBusur[m][n];
        }
    }
    cekMatriks = true;
}

void buatSimpulGraph()
{
    alamat = new Graph*[jumlahSimpul];
    buatMatriks();
    for (int i=0; i<jumlahSimpul; i++){
        if (isEmpty() == 1){
            simpul = new Graph;
            simpul->data = dataSimpul[i];
            simpul->kanan = NULL;
            simpul->kiri = NULL;
            awal = simpul;
            akhir = simpul;
            alamat[i] = awal;
        }
        else{
            simpul = new Graph;
            simpul->data = dataSimpul[i];
            akhir->kiri = simpul;
            akhir = simpul;
            simpul->kiri = NULL;
            simpul->kanan = NULL;
            alamat[i] = akhir;
        }
    }
    bantu = awal;
    for (int m=0; m<jumlahSimpul; m++){
        bantu2 = bantu;
        for (int n=0; n<jumlahSimpul; n++){
            if (dataBusur[m][n] != 0){
                simpul = new Graph;
                simpul->data = to_string(dataBusur[m][n]);
                bantu2->kanan = simpul;
                simpul->kiri = alamat[n];
                simpul->kanan = NULL;
                bantu2 = simpul;
            }
        }
        bantu = bantu->kiri;
    }
}

void tampilGraph()
{
    if (isEmpty() == 0){
        bantu = awal;
        while (bantu != NULL){
            cout << ends << bantu->data << ": ";
            bantu2 = bantu->kanan;
            while (bantu2 != NULL){
                cout << ends << bantu2->kiri->data << ": " << bantu2->data << " ";
                bantu2 = bantu2->kanan;
            }
            cout << endl;
            bantu = bantu->kiri;
        }
    }
    else{
        cout << " Graph masih kosong!" << endl;
    }
}

void busurTerPendek()
{
    int min;
    int i=0, j=0;
    while(j<jumlahSimpul){
        i=0;
        while(i<jumlahSimpul){
            if(dataBusur[j][i]!=0)
                min = dataBusur[j][i];
            i++;
        }
        j++;
    }

    if(isEmpty() == 0){
        for(int k = 0;k < jumlahSimpul;k++){
            for(int l = 0;l < jumlahSimpul;l++){
                if(min > dataBusur[k][l] && dataBusur[k][l]!=0){
                    min = dataBusur[k][l];
                }
            }
        }
        cout << ends << "Busur terpendek : " << min << endl;
    }
}

int main()
{
    init();
    cout << " Silahkan masukkan jumlah kota: ";
    cin >> jumlahSimpul;
    buatSimpulGraph();
    tampilGraph();
    busurTerPendek();
    return 0;
}

#include <iostream>

using namespace std;

int jumlahSimpul = 5;
string *dataSimpul;
int **dataBusur;
bool cekMatriks = false;

void buatMatriks()
{
    dataSimpul = new string[jumlahSimpul];
    dataBusur = new int*[jumlahSimpul];
    dataBusur[0] = new int[jumlahSimpul * jumlahSimpul];
    for (int i = 1; i < jumlahSimpul; i++){
        dataBusur[i] = dataBusur[i-1] + jumlahSimpul;
    }
    cout << " Silahkan masukkan nama simpul" <<endl;
    for (int i = 0; i < jumlahSimpul; i++){
        cout << " Simpul " <<i+1<< " : ";
        cin >> dataSimpul[i];
    }
    cout << " Silahkan masukkan bobot antar simpul" << endl;
    for (int baris = 0; baris < jumlahSimpul; baris++){
        for (int kolom = 0; kolom < jumlahSimpul; kolom++){
            cout << " " << dataSimpul[baris] << " --> " << dataSimpul[kolom] << " : ";
            cin >> dataBusur[baris][kolom];
        }
    }
    cout << endl;
    cekMatriks = true;
}

void tampilMatriks()
{
    if (cekMatriks){
        cout << "   ";
        for (int i = 0; i < jumlahSimpul; i++){
            cout << dataSimpul[i] << " ";
        }
        cout << endl;
        for (int baris = 0; baris < jumlahSimpul; baris++){
            cout << " " << dataSimpul[baris] << " ";
            for (int kolom = 0; kolom < jumlahSimpul; kolom++){
                cout << dataBusur[baris][kolom] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << " Tidak ada matriks" << endl;
    }
}

int main()
{
    cout << " Silahkan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;
    buatMatriks();
    tampilMatriks();
    return 0;
}

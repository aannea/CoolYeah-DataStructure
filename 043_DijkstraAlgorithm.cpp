#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int jumlahSimpul;
string *dataSimpul;
int **dataBusur;
int *jarakDiketahui;
int *kunjungan;
int indeksPosisi, simpulSaatIni, simpulAsal, simpulTujuan, jarakSaatIni, jarakLama, jarakBaru;
int dikunjungi = 1;
int belumDikunjungi = 0;
bool cekMatriks = false;

void buatMatriks()
{
    dataSimpul = new string[jumlahSimpul];
    dataBusur = new int*[jumlahSimpul];
    dataBusur[0] = new int[jumlahSimpul *jumlahSimpul];

    for(int i =1; i<jumlahSimpul; i++){
        dataBusur[i] = dataBusur[i - 1] + jumlahSimpul;
    }

    cout << " Silahkan masukkan nama simpul" << endl;
    for(int i = 0; i <jumlahSimpul; i++){
        cout << " Simpul " << i+1 << " : " ;
        cin >> dataSimpul[i];
    }
    cout << endl;

    cout << " Silahkan masukkan bobot antar simpul : " << endl;
    for(int baris = 0; baris < jumlahSimpul; baris++){
        for(int kolom = 0; kolom < jumlahSimpul; kolom++){
            cout << " " << dataSimpul[baris] << " --> " <<dataSimpul[kolom] << " : ";
            cin >> dataBusur[baris][kolom];
        }
    }
    cout << endl;

    cekMatriks = true;
}

void jarakTerdekat(){
    if(cekMatriks){
        jarakDiketahui = new int[jumlahSimpul];
        kunjungan = new int[jumlahSimpul];

        for(int i=0; i<jumlahSimpul; i++){
            jarakDiketahui[i] = 999;
            kunjungan[i] = belumDikunjungi;
        }
        kunjungan[simpulAsal] = dikunjungi;
        jarakDiketahui[simpulAsal] = 0;
        simpulSaatIni = simpulAsal;

        while(simpulSaatIni != simpulTujuan){
            jarakLama = 999;
            jarakSaatIni = jarakDiketahui[simpulSaatIni];

            for(int i=0; i<jumlahSimpul; i++){
                if(kunjungan[i] == belumDikunjungi){
                    jarakBaru = jarakSaatIni + dataBusur[simpulSaatIni][i];

                    if(jarakBaru < jarakDiketahui[i]){
                        jarakDiketahui[i] = jarakBaru;
                    }
                    if(jarakDiketahui[i] < jarakLama){
                        jarakLama = jarakDiketahui[i];
                        indeksPosisi = i;
                    }
                }
            }
            simpulSaatIni = indeksPosisi;
            kunjungan[simpulSaatIni] = dikunjungi;
        }
        cout << " Lintasan terpendek dari simpul indeks ke-" << simpulAsal << " ke simpul indeks ke-" << simpulTujuan << " adalah " << jarakDiketahui[simpulTujuan] << endl;
        delete jarakDiketahui;
        delete kunjungan;
    }
}

void tampilMatriks()
{
    if(cekMatriks){
        cout << left << setw(4) << " ";
        for(int i=0; i<jumlahSimpul; i++){
            cout << left << setw(5) << dataSimpul[i] << " ";
        }
        cout << endl;

        for(int baris = 0; baris<jumlahSimpul; baris++){
            cout << " " << dataSimpul[baris] << left << setw(2) << " ";
            for(int kolom = 0; kolom < jumlahSimpul; kolom++){
                cout << left << setw(5) << dataBusur[baris][kolom] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else{
        cout << " Matriks masih kosong!" << endl;
        cout << endl;
    }
}

int main()
{
    char keluar;
    cout << " Silahkan masukkan jumlah simpul : ";
    cin >> jumlahSimpul;

    buatMatriks();
    tampilMatriks();

    do{
        cout << " Silahkan masukkan indeks simpul asal [0 - " << jumlahSimpul-1 << "]: ";
        cin >> simpulAsal;
        cout << " Silahkan masukkan indeks simpul tujuan [0 - " << jumlahSimpul-1 << "]: ";
        cin >> simpulTujuan;

        jarakTerdekat();
        cout << endl;
        cout << " Keluar? (y/t): ";
        cin >> keluar;
        cout << endl;

        if(tolower(keluar) !='y'){
            system("cls");
            tampilMatriks();
        }
    }while(tolower(keluar) !='y');
    return 0;
}

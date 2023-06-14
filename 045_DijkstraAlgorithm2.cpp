#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int jumlahSimpul;
string* dataSimpul;
int** dataBusur;
int* jarakDiketahui;
int* kunjungan;
int indeksPosisi, simpulSaatIni, simpulAsal, simpulTujuan;
string awal, akhir;
int jarakSaatIni, jarakLama, jarakBaru;
int dikunjungi = 1;
int belumDikunjungi = 0;
int** jalurTerdekat;
bool cekMatriks = false;

void buatMatriks()
{
    dataSimpul = new string[jumlahSimpul];
    dataBusur = new int* [jumlahSimpul];
    dataBusur[0] = new int[jumlahSimpul * jumlahSimpul];

    for (int i = 1; i < jumlahSimpul; i++) {
        dataBusur[i] = dataBusur[i - 1] + jumlahSimpul;
    }

    cout << " Silahkan masukan nama simpul" << endl;
    for (int i = 0; i < jumlahSimpul; i++) {
        cout << " Simpul " << i + 1 << ": ";
        cin >> dataSimpul[i];
    }
    cout << endl;
    cout << " Silahkan masukkan bobot antar simpul" << endl;
    for (int baris = 0; baris < jumlahSimpul; baris++) {
        for (int kolom = 0; kolom < jumlahSimpul; kolom++) {
            cout << " " << dataSimpul[baris] << " --> " << dataSimpul[kolom] << " : ";
            cin >> dataBusur[baris][kolom];
        } cout << endl;
    }
    cout << endl;

    cekMatriks = true;
}

void jarakTerdekatDi()
{
    if (cekMatriks) {
        jarakDiketahui = new int[jumlahSimpul];
        kunjungan = new int[jumlahSimpul];

        for (int i = 0; i < jumlahSimpul; i++) {
            jarakDiketahui[i] = 999;
            kunjungan[i] = belumDikunjungi;
        }

        kunjungan[simpulAsal] = dikunjungi;
        jarakDiketahui[simpulAsal] = 0;
        simpulSaatIni = simpulAsal;

        while (simpulSaatIni != simpulTujuan) {
            jarakLama = 999;
            jarakSaatIni = jarakDiketahui[simpulSaatIni];

            for (int i = 0; i < jumlahSimpul; i++) {
                if (kunjungan[i] == belumDikunjungi) {
                    jarakBaru = jarakSaatIni + dataBusur[simpulSaatIni][i];

                    if (jarakBaru < jarakDiketahui[i]) {
                        jarakDiketahui[i] = jarakBaru;
                    }
                    if (jarakDiketahui[i] < jarakLama) {
                        jarakLama = jarakDiketahui[i];
                        indeksPosisi = i;
                    }
                }
            }
            simpulSaatIni = indeksPosisi;
            kunjungan[simpulSaatIni] = dikunjungi;

        }
        awal = dataSimpul[simpulAsal];
        akhir = dataSimpul[simpulTujuan];
        cout << " Lintasan terpendek dari simpul " << awal << " ke simpul " << akhir << " adalah " << jarakDiketahui[simpulTujuan] << endl;
        delete jarakDiketahui;
        delete kunjungan;
    }
}

void jarakTerdekat()
{
    if (cekMatriks) {
        jalurTerdekat = new int* [jumlahSimpul];
        jalurTerdekat[0] = new int[jumlahSimpul * jumlahSimpul];

        for (int i = 1; i < jumlahSimpul; i++) {
            jalurTerdekat[i] = jalurTerdekat[i - 1] + jumlahSimpul;
        }

        for (int baris = 0; baris < jumlahSimpul; baris++) {
            for (int kolom = 0; kolom < jumlahSimpul; kolom++) {
                jalurTerdekat[baris][kolom] = dataBusur[baris][kolom];
            }
        }

        for (int k = 0; k < jumlahSimpul; k++) {
            for (int baris = 0; baris < jumlahSimpul; baris++) {
                for (int kolom = 0; kolom < jumlahSimpul; kolom++) {
                    if (jalurTerdekat[baris][k] + jalurTerdekat[k][kolom] < jalurTerdekat[baris][kolom]) {
                        jalurTerdekat[baris][kolom] = jalurTerdekat[baris][k] + jalurTerdekat[k][kolom];
                    }
                }
            }
        }

        cout << left << setw(4) << " ";
        for (int i = 0; i < jumlahSimpul; i++) {
            cout << left << setw(5) << dataSimpul[i] << " ";
        }
        cout << endl;

        for (int baris = 0; baris < jumlahSimpul; baris++) {
            cout << " " << dataSimpul[baris] << left << setw(2) << " ";
            for (int kolom = 0; kolom < jumlahSimpul; kolom++) {
                cout << left << setw(5) << jalurTerdekat[baris][kolom] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void tampilMatriks()
{
    if (cekMatriks) {
        cout << "\t\t";// << setw(2) << "\t";
        for (int i = 0; i < jumlahSimpul; i++) {
            cout << left << dataSimpul[i] << "\t";
        }cout << endl;

        for (int baris = 0; baris < jumlahSimpul; baris++) {
            cout << "\t" << dataSimpul[baris] << left << "\t";
            for (int kolom = 0; kolom < jumlahSimpul; kolom++) {
                cout << left << dataBusur[baris][kolom] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    else {
        cout << " Matriks masih kosong!" << endl;
        cout << endl;
    }
}

int main()
{
    int pil;
    do {
        system("CLS");
        cout << " ========= Menu =========" << endl;
        cout << " 1. Tambah data" << endl;
        cout << " 2. Jarak terdekat[djaksatra]" << endl;
        cout << " 3. Jarak terdekat" << endl;
        cout << " 4. Keluar" << endl << endl;
        cout << " Masukkan Pilihan : ";
        cin >> pil;
        cout << endl;
        switch (pil)
        {
        case 1:
            cout << " Silahkan masukan jumlah simpul : ";
            cin >> jumlahSimpul;
            buatMatriks();
            system("pause");
            break;
        case 2:
            tampilMatriks();
            cout << " Silahkan masukan indeks simpul asal [0 - " << jumlahSimpul - 1 << "] : ";
            cin >> simpulAsal;
            cout << " Silahkan masukkan indeks simpul tujuan [0 - " << jumlahSimpul - 1 << "] : ";
            cin >> simpulTujuan;
            jarakTerdekatDi();
            system("pause");
            break;
        case 3:
            jarakTerdekat();
            system("pause");
            break;
            break;
        }
    } while (pil != 4);

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    //deklarasi array
    string nama[10], status[10];
    int nilai[10];
    //meminta jumlah inputan data
    cout << "Masukkan Jumlah Data = ";
    cin >> n;
    cout << endl;
    //perulangan untuk inputan data
    for (int i=0; i<n; i++){
        cout << endl;
        cout << "Masukkan Nama  = ";
        cin >> nama[i];
        cout << "Masukkan Nilai = ";
        cin >> nilai[i];
        //menetapkan status 
        if (nilai[i] <=50){
            status[i] =  "Tidak Lulus";
        }
        else {
            status[i] = "Lulus";
        }
    }
    //tampilan
    cout << endl;
    cout <<"       DAFTAR NILAI MAHASISWA           "<< endl;
    cout <<"========================================"<< endl;
    cout <<"No.     Nama            Nilai   Status"<< endl;
    cout <<"========================================"<< endl;
    //menampilkan isi array
    for (int i=0; i<n; i++){
        cout << i+1 <<"\t"<< nama[i] << "\t\t" << nilai[i] << "\t"<< status[i] << endl;
        cout <<"========================================"<< endl;
    }
    return 0;
}

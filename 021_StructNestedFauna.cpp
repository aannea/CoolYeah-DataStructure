#include <iostream>

using namespace std;

int main()
{
    string anu,uanu;
    struct hewan{
    string nama_hewan, jenis_kelamin, cara_berkembangbiak, alat_pernafasan, tempat_hidup;
    bool apakah_karnivora;
    };

    struct hewan_darat{
    hewan darat;
    int jumlah_kaki;
    bool menyusui;
    string suara;
    };

    struct hewan_laut{
    hewan laut;
    string bentuk_sirip;
    string bentuk_pertahanan_diri;
    };

    hewan_darat hd1;
    hd1={"Kucing", "Betina", "Melahirkan", "Paru-Paru", "Darat", true, 4, true, "mengeong"};

    cout << "==========Hewan Darat==========" << endl;
    cout << "Nama Hewan             : " << hd1.darat.nama_hewan << endl;
    cout << "Jenis Kelamin          : " << hd1.darat.jenis_kelamin << endl;
    cout << "Cara Berkembang Biak   : " << hd1.darat.cara_berkembangbiak << endl;
    cout << "Alat Pernafasan        : " << hd1.darat.alat_pernafasan << endl;
    cout << "Tempat Hidup           : " << hd1.darat.tempat_hidup << endl;
    if(hd1.darat.apakah_karnivora){
        anu="Karnivora";
    }
    else{
        anu="Tidak";
    }
    cout << "Apakah Karnivora       : " << anu << endl;
    cout << "Jumlah Kaki            : " << hd1.jumlah_kaki << endl;
    if(hd1.menyusui){
        uanu="Menyusui";
    }
    else{
        uanu="Tidak";
    }
    cout << "Apakah Menyusui        : " << uanu << endl;
    cout << "Suara                  : " << hd1.suara << endl;

    cout << endl;

    hewan_laut hl1;
    hl1={"Lumba-Lumba", "Betina", "Melahirkan", "Paru-Paru", "Laut", true, "Punggung", "Giginya"};

    cout << "==========Hewan Laut==========" << endl;
    cout << "Nama Hewan             : " << hl1.laut.nama_hewan << endl;
    cout << "Jenis Kelamin          : " << hl1.laut.jenis_kelamin << endl;
    cout << "Cara Berkembang Biak   : " << hl1.laut.cara_berkembangbiak << endl;
    cout << "Alat Pernafasan        : " << hl1.laut.alat_pernafasan << endl;
    cout << "Tempat Hidup           : " << hl1.laut.tempat_hidup << endl;
    if(hl1.laut.apakah_karnivora){
        anu="Karnivora";
    }
    else{
        anu="Tidak";
    }
    cout << "Apakah Karnivora       : " << anu << endl;
    cout << "Bentuk sirip           : " << hl1.bentuk_sirip << endl;
    cout << "Bentuk Pertahanan Diri : " << hl1.bentuk_pertahanan_diri << endl;
    return 0;
}

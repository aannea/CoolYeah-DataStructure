#include <iostream>

using namespace std;

int main()
{
    struct pegawai{
    string nama, alamat;
    long gaji;
    };

    pegawai pl[3]={{"Budi", "Purwokerto", 35000000},{"Andre", "Tegal", 50000000},{"Rini", "Bandung", 40000000}};

    pl[0].alamat="Banyumas";

    for(int i=0; i<3; i++){
        cout << "Nama   : " << pl[i].nama << endl;
        cout << "Alamat : " << pl[i].alamat << endl;
        cout << "Gaji   : " << pl[i].gaji << endl;
        cout << endl;
    }
    return 0;
}

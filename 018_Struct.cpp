#include <iostream>

using namespace std;

int main()
{
    struct mahasiswa{
    int nim;
    string nama, alamat, jurusan;
    };

    mahasiswa a;
    a.nim = 21212121;
    a.nama = "Aleksander";
    a.jurusan = "Teknik Informatika";
    a.alamat = "Purwokerto";

    mahasiswa b;
    b.nim = 12121212;
    b.nama = "AAN";
    b.jurusan = "Teknik Informatika";
    b.alamat = "Purwokerto";

    cout << "NIM     : " << a.nim << endl;
    cout << "Nama    : " << a.nama << endl;
    cout << "Jurusan : " << a.jurusan << endl;
    cout << "Alamat  : " << a.alamat << endl;

    cout << endl;

    cout << "NIM     : " << b.nim << endl;
    cout << "Nama    : " << b.nama << endl;
    cout << "Jurusan : " << b.jurusan << endl;
    cout << "Alamat  : " << b.alamat << endl;
    return 0;
}

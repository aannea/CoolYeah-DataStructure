#include <iostream>

using namespace std;

int main()
{
    struct fakultas{
    string namafakultas,kodefakultas;
    };

    struct jurusan{
    fakultas faculty;
    string namajurusan,kelas;
    };

    fakultas f1;
    jurusan j1;

    f1.namafakultas = "Informatika";
    f1.kodefakultas = "IF";

    j1.faculty.namafakultas = "Informatika";
    j1.namajurusan = "Teknik Informatika";
    j1.kelas = "IFB";

    cout << "Nama Fakultas : " << f1.namafakultas << endl;
    cout << "Kode Fakultas : " << f1.kodefakultas << endl;

    cout << "Nama Fakultas : " << j1.faculty.namafakultas << endl;
    cout << "Nama Jurusan  : " << j1.namajurusan << endl;
    cout << "Kelas         : " << j1.kelas << endl;

    return 0;
}

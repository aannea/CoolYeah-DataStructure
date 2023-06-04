#include <iostream>

using namespace std;

//PROGRA INPUT ARRAY 3 DIMENST

int main(){
    //Deklarasi array
    int arr[2][2][2];
    //Input elemen
    for (int x=0; x<2; x++){
        for (int y=0; y<2; y++){
            for (int z=0; z<2; z++){
                cout << "Elemen[" << x << "][" << y << "][" << z << "] = ";
                cin >>arr[x][y][z];
            }
        }
        cout << endl;
    }

    //0utput elenen
    for (int x=0; x<2; x++){
        for (int y=0; y<2; y++){
            for (int z=0; z<2; z++){
                cout << "Elemen[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
        cout << endl;
    }
    cout << endl;

    //tampilan array
    for (int x=0; x<2; x++){
        for (int y=0; y<2; y++){
            for (int z=0; z<2; z++){
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
return 0;
}

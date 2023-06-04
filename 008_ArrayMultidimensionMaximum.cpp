#include <iostream>

using namespace std;

int main()
{
    int a=0, b[2][2][2],c,d,e;

    while (a<2){
        d=0;
        while (d<2){
            e=0;
            while (e<2){
                cout << "Inputkan Nilai [" << a << "][" << d << "][" << e << "] : ";cin >> b[a][d][e];
                e++;
            }
            d++;
            cout << endl;
        }
        a++;
    }
    a=0;c=b[0][0][0];
    while (a<2){
        d=0;
        while (d<2){
            e=0;
            while (e<2){
                if(c<b[a][d][e]){
                    c=b[a][d][e];
                }
                e++;
            }
            d++;
        }
        a++;
    }
    cout << "Nilai Maksimum : " << c;
    return 0;
}

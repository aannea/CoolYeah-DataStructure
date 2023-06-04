#include <iostream>

using namespace std;

int main(){
    int a, b, c, e, f, g, h;
    cout << "Jumlah Array[?][][]   : ";cin >> a;
    cout << "Jumlah Array[" << a << "][?][]  : "; cin >> b;
    cout << "Jumlah Array[" << a << "][" << b << "][?] : "; cin >> c;\
    cout << endl;
    int d[a][b][c];
    e=0;
    while (e<a){
        f=0;
        while (f<b){
            g=0;
            while(g<c){
                cout << "Elemen[" << e << "][" << f << "][" << g << "] = ";
                cin >> d[e][f][g];
                g++;
            }
            f++;
        }
        cout << endl;
        e++;
    }
    e=0;
    while (e<a){
        f=0;
        while (f<b){
            g=0;
            while(g<c){
                cout << "Elemen[" << e << "][" << f << "][" << g << "] = " << d[e][f][g] << endl;
                g++;
            }
            f++;
        }
        cout << endl;
        e++;
    }
    e=0;
    while (e<a){
        f=0;
        while (f<b){
            g=0;
            while(g<c){
                cout << d[e][f][g] << ends;
                g++;
            }
            cout << endl;
            f++;
        }
        cout << endl;
        e++;
    }
return 0;
}

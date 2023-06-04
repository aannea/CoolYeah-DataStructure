#include <iostream>

using namespace std;
int a,b,c,e,f,g,i,k;

int main()
{
    menu:
    system("cls");
    cout << "Kalkulator Matrix" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Transpose" << endl;

    cout << "Pilih : " ;cin >> k;

    cout << "Jumlah Array[?][][]   : ";cin >> a;
    cout << "Jumlah Array[" << a << "][?][]  : "; cin >> b;
    cout << "Jumlah Array[" << a << "][" << b << "][?] : "; cin >> c;
    int d[a][b][c];
    int h[1][b][c];
    int j[a][b][c];

    switch(k){
    case 1:
        system("cls");
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
            cout << "Matrix " << e+1 << endl;
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
        cout << "Penjumlahan" << endl;
        f=0;
        while (f<b){
            g=0;
            while(g<c){
                e=0;
                h[0][f][g]=d[e][f][g];
                while(e<a-1){
                    h[0][f][g]=h[0][f][g]+d[e+1][f][g];
                    e++;
                }
                g++;
            }
            f++;
        }
        f=0;
        while (f<b){
            g=0;
            while(g<c){
                cout << h[0][f][g] << ends;
                g++;
            }
            cout << endl;
            f++;
        }
        cout << endl;
        system("pause");
        goto menu;
        break;
    case 2:
        system("cls");
        cout << "Pengurangan" << endl;
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
            cout << "Matrix " << e+1 << endl;
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
        f=0;
        while (f<b){
            g=0;
            while(g<c){
                e=0;
                h[0][f][g]=d[e][f][g];
                while(e<a-1){
                    h[0][f][g]=h[0][f][g]-d[e+1][f][g];
                    e++;
                }
                g++;
            }
            f++;
        }
        f=0;
        while (f<b){
            g=0;
            while(g<c){
                cout << h[0][f][g] << ends;
                g++;
            }
            cout << endl;
            f++;
        }
        cout << endl;
        system("pause");
        goto menu;
        break;
    case 3:
        system("cls");
        cout << "Perkalian" << endl;
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
            cout << "Matrix " << e+1 << endl;
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
        e=0;
        while (e<a){
            f=0;
            while (f<b){
                g=0;
                while(g<c){
                    j[e][f][g]=0;
                    i=0;
                    while(i<c){
                        j[e][f][g] +=d[e][i][g]*d[e][f][i];
                        i++;
                    }
                    g++;
                }
                f++;
            }
            e++;
        }
        f=0;
        while (f<b){
            g=0;
            while(g<c){
                cout << j[0][f][g]<< ends;
                g++;
            }
            cout << endl;
            f++;
        }
        cout << endl;
        system("pause");
        goto menu;
        break;
    case 4:
        system("cls");
        cout << "Transpose" << endl;
        e=0;
        while (e<2){
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
            cout << "Matrix " << e+1 << endl;
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
        e=0;
        while (e<a){
            f=0;
            while (f<b){
                g=0;
                while(g<c){
                    cout << d[e][g][f] << ends;
                    g++;
                }
                cout << endl;
                f++;
            }
            cout << endl;
            e++;
        }
        system("pause");
        goto menu;
        break;
    default:
        return 0;
    }
}

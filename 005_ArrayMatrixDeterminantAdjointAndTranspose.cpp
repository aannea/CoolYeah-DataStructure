#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(short int x, short int y) {
    COORD a = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

int main()
{
    //deklarasi array
    double matrix[2][2], matrix2[2][2], invers[2][2];
    int a,b,c,d;

    //input nilai array user
    a=0;
    gotoxy(40,3);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(40,5);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(40,10);
    while (a<=41){
        cout << "=";
        a++;
    }
    a=0;
    while (a<=7){
        gotoxy(40,a+3);
        cout << "=";
        a++;
    }
    a=0;
    while (a<=7){
        gotoxy(81,a+3);
        cout << "=";
        a++;
    }
    gotoxy(53,4);cout << "Isi nilai array" << endl;
    a=c=0;
    while (a<2){
        b=0;
        while(b<2){
            gotoxy(41,6+c);cout << "Array baris "<< a+1 <<" kolom "<< b+1 <<" :";
            b++;
            c++;
        }
        a++;
    }
    a=c=0;
    while (a<2){
        b=0;
        while(b<2){
            gotoxy(65,6+c);cin >> matrix[a][b];
            b++;
            c++;
        }
        a++;
    }

    //tampilan matriks
    a=0;
    gotoxy(41,12);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(41,14);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(41,17);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    while (a<6){
        gotoxy(40,a+12);
        cout << "=";
        a++;
    }
    a=0;
    while (a<6){
        gotoxy(51,a+12);
        cout << "=";
        a++;
    }
    gotoxy(42,13);cout << "Matriks" << endl;
    a=c=d=0;
    while (a<2){
        b=0;
        while(b<2){
            gotoxy(43+d,15+b);cout << matrix[a][b] << ends;
            b++;
            c++;
            if (c>1){
                d=+5;
            }
        }
        a++;
    }

   //adjoin
    matrix2[0][0] = matrix[1][1];
    matrix2[1][1] = matrix[0][0];
    matrix2[0][1] = matrix[0][1]*-1;
    matrix2[1][0] = matrix[1][0]*-1;

    //tampilan adjoin matriks
    a=0;
    gotoxy(41,19);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(41,21);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(41,24);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    while (a<6){
        gotoxy(40,a+19);
        cout << "=";
        a++;
    }
    a=0;
    while (a<6){
        gotoxy(51,a+19);
        cout << "=";
        a++;
    }
    gotoxy(43,20);cout << "Adjoin"<< endl;
    a=c=d=0;
    while (a<2){
        b=0;
        while(b<2){
            gotoxy(43+d,22+b);cout << matrix2[a][b]<<ends;
            b++;
            c++;
            if (c>1){
                d=+5;
            }
        }
        a++;
    }

    //determinan
    a=0;
    gotoxy(71,12);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(71,14);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(71,16);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    while (a<5){
        gotoxy(70,a+12);
        cout << "=";
        a++;
    }
    a=0;
    while (a<5){
        gotoxy(81,a+12);
        cout << "=";
        a++;
    }
    double deter = matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
    gotoxy(71,13);cout << "Determinan";
    gotoxy(74,15);cout << deter ;

    //invers
    a=0;
    gotoxy(71,19);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(71,21);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    gotoxy(71,24);
    while (a<10){
        cout << "=";
        a++;
    }
    a=0;
    while (a<6){
        gotoxy(70,a+19);
        cout << "=";
        a++;
    }
    a=0;
    while (a<6){
        gotoxy(81,a+19);
        cout << "=";
        a++;
    }
    gotoxy(73,20);cout << "Invers" << endl;
    a=c=d=0;
    while (a<2){
        b=0;
        while(b<2){
            invers[a][b] = matrix2[a][b]/deter;
            gotoxy(73+d,22+b);cout << invers[a][b]<< ends;
            b++;
            c++;
            if (c>1){
                d=+5;
            }
        }
        a++;
    }
    gotoxy(1,26);
    return 0;
}

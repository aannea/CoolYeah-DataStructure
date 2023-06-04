#include <iostream>

using namespace std;

int main()
{
    int arr[2][3][4]={{{1,1,1,1},{2,2,2,2},{3,3,3,3}},{{1,1,1,1},{2,2,2,2},{3,3,3,3}}};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++){
                cout << arr[i][j][k] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

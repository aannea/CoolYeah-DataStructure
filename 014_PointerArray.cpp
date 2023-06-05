#include <iostream>

using namespace std;
 
int main()
{
    int data[]={1,2,3,4,5};
    int *pData = data;
 
    int a=0;
    while (a<5){
        cout << pData[a] << endl;
        a++;
    }
    return 0;
}

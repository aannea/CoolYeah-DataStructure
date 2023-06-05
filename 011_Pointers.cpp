#include <iostream>
 
using namespace std;
 
int main()
{
    int a=100;
    int *b=&a;
    cout << b << endl; //merujuk pada alamat memory 'a'
    cout << *b << endl; //merujuk pada nilai 'a'
    return 0;
}

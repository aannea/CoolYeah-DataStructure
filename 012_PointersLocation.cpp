#include <iostream>

using namespace std;
 
int main()
{
    int v =7;
    int *p;
 
    cout << "Nilai v   = " << v << endl;
    cout << "Nilai p   = " << *p << endl; // nilai akan random
    cout << "Alamat v  = " << &v << endl;
    cout << "Alamatnya = " << &p << endl;

    return 0;
}

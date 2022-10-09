#include <iostream>

using namespace std;

int main()
{
    int x=1, y=99, temp;
    cout << "Nilai awal x = " << x << " dan y = " << y << endl;
    temp = x ;
    x = y;
    y = temp;
    cout << "Setelah ditukar x = " << x << " dan y = " << y << endl;
}

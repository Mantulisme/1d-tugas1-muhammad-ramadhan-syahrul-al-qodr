#include <iostream>

using namespace std;

int main()
{
    int x=420, y=69;
    cout << "Nilai awal x = " << x << " dan y = " << y << endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout << "Setelah ditukar x = " << x << " dan y = " << y << endl;
    
return 0;
}

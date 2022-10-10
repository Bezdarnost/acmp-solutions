#include <iostream>

using namespace std;

int main()
{
    int a, b, a1, b1;
    a = 0;
    b = 0;

    for (int i = 0; i < 4; i++){
        cin >> a1 >> b1;
        a += a1;
        b += b1;
    }
    
    cout << (a > b ? "1" : a < b ? "2" : "DRAW");
    return 0;
}

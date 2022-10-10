#include <iostream>

using namespace std;

int main()
{
    int v, t;
    cin >> v >> t;

    if (v >= 0){
        cout << (v * t) % 109 + 1;
        return 0;
    }

    cout << (110 + (v * t) % 109);
    return 0;
}

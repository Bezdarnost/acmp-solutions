#include <iostream>

using namespace std;

int main()
{
    int h, b, a;
    cin >> h >> b >> a;

    if (h - b <= 0){
        cout << 1;
        return 0;
    }

    if ((h - b) % (b - a) != 0){
        cout << (h - b) / (b - a) + 2;
        return 0;
    }

    cout << (h - b) / (b - a) + 1;
    return 0;
}

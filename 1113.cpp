#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a % b == 0 || b % a == 0){
        cout << 1;
        return 0;
    }

    cout << 2;
    return 0;
}

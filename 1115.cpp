#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << b / a << " " << b % a << " ";

    if (b % a != 0){
        cout << a - b % a;
        return 0;
    }

    cout << 0;
    return 0;
}

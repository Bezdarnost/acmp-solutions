#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << a % b << endl;
    cout << (a % b + abs(b)) % abs(b);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n / 100000 + n / 10000 % 10 + n / 1000 % 10 == n / 100 % 10 + n / 10 % 10 + n % 10){
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;
}

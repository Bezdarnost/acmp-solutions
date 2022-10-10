#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    if (a > b){
        cout << ">";
        return 0;
    }
    else if (a < b){
        cout << "<";
        return 0;
    }
    cout << "=";
    return 0;
}

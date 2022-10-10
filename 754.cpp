#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (max(max(a, b), c) > 727 || min(min(a, b), c) < 94){
        cout << "Error";
        return 0;
    }

    cout << max(max(a, b), c);
    return 0;
}

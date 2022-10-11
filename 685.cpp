#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3, b1, b2, b3, ans;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    ans = 0;
    ans += max(max(a1, a2), a3) * max(max(b1, b2), b3);
    ans += min(min(a1, a2), a3) * min(min(b1, b2), b3);
    ans += ((a1+a2+a3)-max(max(a1, a2), a3)-min(min(a1, a2), a3)) * ((b1+b2+b3)-max(max(b1, b2), b3)-min(min(b1, b2), b3));

    cout << ans;
    return 0;
}

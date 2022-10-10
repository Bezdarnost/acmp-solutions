#include <iostream>

using namespace std;

int main()
{
    int n, ans;
    cin >> n;
    ans = 540;

    while (n > 0){
        ans += 45;
        if ((n-1) % 2 == 0 && (n-1) != 0){
            ans += 15;
        }
        else if ((n-1) % 2 == 1) {
            ans += 5;
        }
        n--;
    }

    cout << ans / 60 << " " << ans % 60;
    return 0;
}

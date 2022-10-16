#include <bits/stdc++.h>

using namespace std;

int main()
{
    int circle1[3], circle2[3];

    for (int i = 0; i < 3; i++){
        cin >> circle1[i];
    }

    for (int i = 0; i < 3; i++){
        cin >> circle2[i];
    }

    float distance = sqrt(pow(circle2[1] - circle1[1], 2) + pow(circle2[0] - circle1[0], 2));

    if (circle1[2] + circle2[2] >= distance && distance + circle2[2] >= circle1[2] && distance + circle1[2] >= circle2[2]){
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;
}

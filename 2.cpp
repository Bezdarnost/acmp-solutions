#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N > 0){
        cout << (N + 1) * N / 2;
        return 0;
    }

    if (N == 0){
        cout << 1;
        return 0;
    }

    if (N < 0){
        cout << (-N + 1) * N / 2 + 1;
        return 0;
    }
}

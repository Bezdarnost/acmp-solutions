#include <iostream>

using namespace std;

int sum_of_nums(int num){
    int temp = 0;

    while (num > 0){
        temp += num % 10;
        num /= 10;
    }

    return temp;
}

int best_divisor(int n)
{
    int best = 1;

    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if (sum_of_nums(i) > sum_of_nums(best) && i > best){
                best = i;
            }
        }
    }

    return best;
}

int main()
{
    int n;
    cin >> n;

    cout << best_divisor(n) << endl;
    return 0;
}

//Coin Change Problem(Count all the Combination to make value)[bounded Recursion] 

#include <bits/stdc++.h>
using namespace std;

int countWaysBounded(int coins[], int n, int S) {
    if (S == 0) return 1;
    if (S < 0 || n == 0) return 0;

    return countWaysBounded(coins, n - 1, S) +
           countWaysBounded(coins, n - 1, S - coins[n - 1]);
}

int main() {
    int coins[] = {1, 2, 3};
    int n = 3;
    int S = 4;

    cout << "Number of ways to make sum " << S << " = "
         << countWaysBounded(coins, n, S) << endl;

    return 0;
}

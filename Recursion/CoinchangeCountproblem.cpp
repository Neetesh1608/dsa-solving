//Coin Change Problem(Count all the Combination to make value)[Unbounded Recursion] 


#include <bits/stdc++.h>

using namespace std;

int countWays(int coins[], int n, int S) {
    if (S == 0) return 1;
    if (S < 0) return 0;
    if (n == 0 && S > 0) return 0;

    return countWays(coins, n - 1, S) +
           countWays(coins, n, S - coins[n - 1]);
}

int main() {
    int coins[] = {1, 2, 3};
    int n = 3;
    int S = 4;

    cout << "Number of ways to make sum " << S << " = "
         << countWays(coins, n, S) << endl;

    return 0;
}

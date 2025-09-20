#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, int wt[], int val[], int n) {
    // base case
    if (n == 0 || W == 0)
        return 0;

    // if weight is more than capacity, skip this item
    if (wt[n - 1] > W)
        return knapsack(W, wt, val, n - 1);

    // two choices: exclude or include once
    return max(
        knapsack(W, wt, val, n - 1),                        // exclude
        val[n - 1] + knapsack(W - wt[n - 1], wt, val, n - 1) // include once
    );
}

int main() {
    int val[] = {50, 90, 110};
    int wt[]  = {10, 25, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    cout << "0/1 Knapsack Maximum Value = " << knapsack(W, wt, val, n) << endl;
    return 0;
}

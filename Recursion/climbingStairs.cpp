#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n == 1) return 1;   // only 1 way
    if (n == 2) return 2;   // two ways
    return climbStairs(n-1) + climbStairs(n-2);
}

int main() {
    int n;
    cout << "Enter number of steps: ";
    cin >> n;

    cout << "Number of ways to climb " << n << " stairs = " << climbStairs(n) << endl;
    return 0;
}

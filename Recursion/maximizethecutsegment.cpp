#include <bits/stdc++.h>
using namespace std;

int maximizeTheCuts(int N, int x, int y, int z) {
    if (N == 0) return 0;
    if (N < 0) return INT_MIN;

    int option1 = 1 + maximizeTheCuts(N - x, x, y, z);
    int option2 = 1 + maximizeTheCuts(N - y, x, y, z);
    int option3 = 1 + maximizeTheCuts(N - z, x, y, z);

    int finalAns = max(option1, max(option2, option3));

    return finalAns;
}

int main() {
    int N, x, y, z;
    cout << "Enter rope length and 3 possible cuts: ";
    cin >> N >> x >> y >> z;

    int ans = maximizeTheCuts(N, x, y, z);
    if (ans < 0) ans = 0;   // important fix

    cout << "Maximum cuts possible = " << ans << endl;
    return 0;
}

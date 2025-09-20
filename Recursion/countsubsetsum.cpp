#include <bits/stdc++.h>
using namespace std;

int countSubsets(int arr[], int n, int sum) {
    if (n == 0)
        return (sum == 0) ? 1 : 0;

    if (arr[n-1] > sum)
        return countSubsets(arr, n-1, sum);

    return countSubsets(arr, n-1, sum) +
           countSubsets(arr, n-1, sum - arr[n-1]);
}

int main() {
    int arr[] = {2, 3, 5, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;

    cout << "Count of subsets with sum " << sum << " = "
         << countSubsets(arr, n, sum) << endl;

    return 0;
}

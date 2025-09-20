#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int size, int index) {
    // base case
    if (index >= size) {
        return 0;
    }

    // Option 1: Rob this house (skip next one)
    int option1 = nums[index] + solve(nums, size, index + 2);

    // Option 2: Skip this house
    int option2 = solve(nums, size, index + 1);

    int finalAns = max(option1, option2);
    return finalAns;
}

int rob(vector<int> &nums) {
    int size = nums.size();
    int index = 0;
    int ans = solve(nums, size, index);
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 9, 3, 1}; // Example input
    cout << "Maximum money robbed = " << rob(nums) << endl;
    return 0;
}

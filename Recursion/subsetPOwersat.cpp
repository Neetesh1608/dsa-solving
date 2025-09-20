#include <bits/stdc++.h>
using namespace std;

void powerSet(string str, int index = 0, string curr = "") {
    int n = str.length();

    // base case
    if (index == n) {
        cout << curr << endl;  // print subset
        return;
    }

    // Exclude current character
    powerSet(str, index + 1, curr);

    // Include current character
    powerSet(str, index + 1, curr + str[index]);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Power set of " << str << " is:" << endl;
    powerSet(str);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string str, int index = 0, string curr = "") {
    int n = str.length();
    
    if (index == n) {
        cout << curr << endl;
        return;
    }

    // Exclude current character
    printSubsequences(str, index + 1, curr);

    // Include current character
    printSubsequences(str, index + 1, curr + str[index]);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "All subsequences of " << str << " are:" << endl;
    printSubsequences(str);
    return 0;
}


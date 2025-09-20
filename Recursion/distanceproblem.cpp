#include <bits/stdc++.h>
using namespace std;

int ED(string s1, string s2, int m, int n) {
    
    if (m == 0) return n;
    
    if (n == 0) return m;
    
    if (s1[m - 1] == s2[n - 1])
        return ED(s1, s2, m - 1, n - 1);
        
    return 1 + min({
        ED(s1, s2, m, n - 1),     // Insert
        ED(s1, s2, m - 1, n),     // Remove
        ED(s1, s2, m - 1, n - 1)  // Replace
    });
}

int main() {
    string s1 = "sunday";
    string s2 = "saturday";

    cout << "Edit Distance = " << ED(s1, s2, s1.size(), s2.size()) << endl;
    return 0;
}

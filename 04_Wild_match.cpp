#include <bits/stdc++.h>
using namespace std;

bool isMatch(string s, string p) {
    int m = s.length();
    int n = p.length();

    // Create a 2D table to store the matching results
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

    // An empty pattern matches an empty string
    dp[0][0] = true;

    // Fill in the table
    for (int i = 0; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*') {
                // '*' can match zero or more characters
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
            } else if (p[j - 1] == '?' || p[j - 1] == s[i - 1]) {
                // '?' matches any single character, or characters match
                dp[i][j] = dp[i - 1][j - 1];
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s, p;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the pattern with wildcards (* and ?): ";
    cin >> p;

    if (isMatch(s, p)) {
        cout << "Match found!" << endl;
    } else {
        cout << "No match found." << endl;
    }

    return 0;
}

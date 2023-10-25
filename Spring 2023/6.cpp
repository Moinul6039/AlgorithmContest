#include<bits/stdc++.h>

using namespace std;

int minimumCost(string word1, string word2) {
    int m = word1.length();
    int n = word2.length();

    // Create a 2D vector to store the minimum cost
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    // Initialize the first row and first column
    for (int i = 0; i <= m; i++) {
        dp[i][0] = i;
    }
    for (int j = 0; j <= n; j++) {
        dp[0][j] = j;
    }

    // Fill the remaining cells of the dp table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1));
            }
        }
    }

    return dp[m][n];
}

int main() {
    string word1;
    getline(cin,word1);
    string word2;
    getline(cin,word2);

    int minimumCost2 = minimumCost(word1, word2);

    printf("%d\n",minimumCost2);

    return 0;
}


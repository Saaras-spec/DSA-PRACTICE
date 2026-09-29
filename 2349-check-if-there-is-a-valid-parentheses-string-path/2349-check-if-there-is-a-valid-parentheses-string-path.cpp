class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();

        if ((m + n - 1) % 2 || grid[0][0] == ')')
            return false;

        vector<vector<bitset<205>>> dp(m, vector<bitset<205>>(n));

        dp[0][0][1] = 1;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) continue;

                bitset<205> cur;

                if (i > 0) cur |= dp[i - 1][j];
                if (j > 0) cur |= dp[i][j - 1];

                if (grid[i][j] == '(')
                    dp[i][j] = cur << 1;
                else
                    dp[i][j] = cur >> 1;
            }
        }

        return dp[m - 1][n - 1][0];
    }
};
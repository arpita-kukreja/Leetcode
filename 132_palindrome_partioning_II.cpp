class Solution {
public:
    bool palindrome(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    int solve(string &s, int i, int j, vector<vector<int>> &t) {
        if (i >= j) return 0;
        if (t[i][j] != -1) return t[i][j];
        if (palindrome(s, i, j)) return 0;

        int ans = INT_MAX;
        for (int k = i; k < j; k++) {
            if (palindrome(s, i, k)) {
                int temp = 1 + solve(s, k + 1, j, t);
                ans = min(ans, temp);
            }
        }
        return t[i][j] = ans;
    }

    int minCut(string s) {
        int n = s.length();
        vector<vector<int>> t(n, vector<int>(n, -1));
        return solve(s, 0, n - 1, t);
    }
};

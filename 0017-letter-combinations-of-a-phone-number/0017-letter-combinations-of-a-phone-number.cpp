class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> v(10, "");
        v[2] = "abc";
        v[3] = "def";
        v[4] = "ghi";
        v[5] = "jkl";
        v[6] = "mno";
        v[7] = "pqrs";
        v[8] = "tuv";
        v[9] = "wxyz";

        vector<string> ans;
        string curr;
        backtrack(digits, 0, v, curr, ans);
        return ans;
    }

    void backtrack(string& digits, int idx, vector<string>& v, string& curr, vector<string>& ans) {
        if (idx == digits.size()) {
            ans.push_back(curr);
            return;
        }

        string letters = v[digits[idx] - '0'];
        for (char c : letters) {
            curr.push_back(c);
            backtrack(digits, idx + 1, v, curr, ans);
            curr.pop_back();
        }
    }
};
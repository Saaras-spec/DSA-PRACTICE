class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        st.push("");

        for (char c : s) {
            if (c == '(') {
                st.push("");
            } else if (c == ')') {
                string inner = st.top();
                st.pop();
                reverse(inner.begin(), inner.end());
                st.top() += inner;
            } else {
                st.top() += c;
            }
        }

        return st.top();
    }
};
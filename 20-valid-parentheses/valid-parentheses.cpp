class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> match = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char ch : s) {
            if (match.count(ch)) { // closing bracket
                if (stk.empty() || stk.top() != match[ch])
                    return false;
                stk.pop();
            } else {
                stk.push(ch); // opening bracket
            }
        }

        return stk.empty();
    }
};
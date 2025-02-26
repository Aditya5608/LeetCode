class Solution {
public:
    int longestValidParentheses(string s) {
        //  stack<char> stack;
        // unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        // for (char c : s) {
        //     if (mapping.find(c) == mapping.end()) {
        //         stack.push(c);
        //     } else if (!stack.empty() && mapping[c] == stack.top()) {
        //         stack.pop();
        //     } else {
        //         return false;
        //     }
        //}

      //  return stack.size();   
    //     
        stack<int> st;
        st.push(-1);  // Base index for valid substring calculation
        int max_len = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);  // Push index of '('
            } else {
                st.pop();  // Pop for valid ')'
                if (!st.empty()) {
                    max_len = max(max_len, i - st.top());
                } else {
                    st.push(i);  // Push invalid index for future reference
                }
            }
        }

        return max_len;
    }
};

  
    
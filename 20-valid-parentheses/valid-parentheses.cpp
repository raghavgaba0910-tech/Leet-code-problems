class Solution {
public:
    bool isValid(string s) {

        stack<int> st;

        for(int i = 0; i < s.size(); i++) { 

            if(s[i] == '{' || s[i] == '(' || s[i] == '[') {
                st.push(s[i]);
            }

            else {
                if(st.empty()) return false;

                char a = st.top();

                if((s[i] == '}' && a != '{') || 
                   (s[i] == ')' && a != '(') || 
                   (s[i] == ']' && a != '[')) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};
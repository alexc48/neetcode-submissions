class Solution {
public:
    bool isValid(string s) {

        std::stack<char> stack;
        for (int i = 0; i < s.size(); ++i) {
    
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            stack.push(s[i]);

            else if (s[i] == ')') {
                if (stack.empty() || stack.top() != '(') return false;
                stack.pop();
            }
            else if (s[i] == '}') {
                if (stack.empty() || stack.top() != '{') return false;
                stack.pop();
            }
            else if (s[i] == ']') {
                if (stack.empty() || stack.top() != '[') return false;
                stack.pop();
            }
        }
        if (stack.empty()) return true;
        else return false;
    } 
};
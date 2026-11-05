class Solution {
public:
    bool isPalindrome(int x) {
        std::string x_str = to_string(x);
        std::cout << x_str << std::endl;
        std::string x_org = x_str;
        std::reverse(x_str.begin(), x_str.end());
        if (x_str == x_org) return true;
        return false;
    }
};
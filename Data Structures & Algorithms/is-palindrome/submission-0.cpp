class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";

        for (auto c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

        int l = 0;
        int r = filtered.size()-1;

        while (l < r) {
            if (filtered[l] != filtered[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
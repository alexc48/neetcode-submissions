class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> s_chars;
        std::unordered_map<char, int> t_chars;

        if (s.size() != t.size()) return false;

        for (int i = 0; i < s.size(); ++i) {
            s_chars[s[i]]++;
            t_chars[t[i]]++;
        }

        if (s_chars == t_chars) return true;
        return false;
    }
};
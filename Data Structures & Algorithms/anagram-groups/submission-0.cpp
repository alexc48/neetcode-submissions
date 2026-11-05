class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::string> org_strs = strs;
        for (int i = 0; i < strs.size(); ++i) {
            std::sort(strs[i].begin(), strs[i].end());
        }

        std::unordered_map<std::string, std::vector<int>> words;
        for (int i = 0; i < strs.size(); ++i) {
            words[strs[i]].push_back(i);
        }

        std::vector<std::vector<std::string>> groups;
        for (auto entry : words) {
            std::vector<std::string> group;
            for (int idx : entry.second) {
                group.push_back(org_strs[idx]);
            }
            groups.push_back(group);
        }

        return groups;
    }
};
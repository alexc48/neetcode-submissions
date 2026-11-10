class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        std::unordered_set<int> s(nums.begin(), nums.end());

        int best = 0;
        for (int n : s) {
            if (s.find(n-1) != s.end()) continue;

            int cur = n;
            int length = 1;
            while (s.find(cur + 1) != s.end()) {
                cur++;
                length++;
            }
            best = max(best, length);
        }
        return best;
    } 
};
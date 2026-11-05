class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> frequencies;

        for (int i = 0; i < nums.size(); ++i) {
            frequencies[nums[i]]++;
            if (frequencies[nums[i]] > (nums.size() / 2)) {
                return nums[i];
            }
       }
       return 0;
    }
};
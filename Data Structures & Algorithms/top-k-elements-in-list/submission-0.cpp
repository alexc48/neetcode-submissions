class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencies;
        for (int i = 0; i < nums.size(); ++i) {
            frequencies[nums[i]]++;
        }    

        std::vector<std::pair<int, int>> vec(frequencies.begin(), frequencies.end());
        std::sort(vec.begin(), vec.end(), [](const auto a, const auto b) {
            return a.second > b.second;
        }); 

        std::vector<int> elements(k);
        for (int i = 0; i < k; ++i) {
            elements[i] = vec[i].first; 
        }

        return elements;
    }
};
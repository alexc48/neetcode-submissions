class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    
        vector<int> PP(nums.size());
    
        PP[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            PP[i] = PP[i-1] * nums[i];
        }

        vector<int> SP(nums.size());
        SP[nums.size()-1] = nums[nums.size()-1];
        for (int i = nums.size()-2; i >= 0; --i) {
            SP[i] = SP[i+1] * nums[i];
        }
         
        vector<int> POAES(nums.size());

        POAES[0] = SP[1];
        POAES[nums.size()-1] = PP[nums.size()-2];

        for (int i = 1; i < nums.size()-1; ++i) {
            POAES[i] = PP[i-1] * SP[i+1];
        }

        return POAES;
    }
};
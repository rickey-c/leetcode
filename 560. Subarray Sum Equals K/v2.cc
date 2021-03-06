/*
 * use hash instead of balanced BST.
 */

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix = 0, res = 0;
        unordered_map<int, int> m{{0, 1}};
        
        for(auto i = 0; i < n; ++i) {
            prefix += nums[i];
            res += m[prefix - k];
            ++m[prefix];
        }
        
        return res;
    }
};

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set<int> S;
        bool repeated = false;
        for (int i = 0; i < nums.size() and !repeated; i++) {
            repeated = not (S.insert(nums[i])).second;
        }
        return repeated;
    }
};
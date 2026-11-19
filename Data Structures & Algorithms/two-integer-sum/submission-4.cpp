class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen; // {num,i}

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int b = target - a;

            if (seen.find(b) != seen.end()) {
                return {seen[b],i};
            }
            else seen[nums[i]] = i;
        }

        return {};
    }
};

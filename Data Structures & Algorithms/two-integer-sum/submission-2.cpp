class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m; // keyed by number

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int b = target - a;

            auto it = m.find(b);

            if (it == m.end()) m[a] = i;
            else return {it->second,i};

        }
    }
};
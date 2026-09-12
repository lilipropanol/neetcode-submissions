class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int a, b;

        for (int i = 0; i < nums.size(); i++) {
            a = nums[i];
            b = target - a;

            auto it = m.find(b);

            if (it == m.end()) m[a] = i;
            else return {it->second, i};
        }
    }
};

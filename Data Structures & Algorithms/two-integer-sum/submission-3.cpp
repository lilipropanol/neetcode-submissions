class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i); 
        }

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int b = target - a;

            if (m.find(b) != m.end()) {
                for (auto iaux : m[b]) {
                    if (iaux != i) {
                        int mi = min(i,iaux);
                        if (mi == i) return {i,iaux};
                        else return {iaux,i};
                    };
                }
            }
        }
    return {};
    }
};
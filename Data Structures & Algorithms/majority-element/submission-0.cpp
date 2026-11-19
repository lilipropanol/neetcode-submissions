class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int floor = nums.size()/2;

        unordered_map<int,int> f;

        for (auto n : nums) {
            f[n]++;
            if (f[n] > floor) return n;
        }

        return -1;
    }
};
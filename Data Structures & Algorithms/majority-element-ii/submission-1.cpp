class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> s;
        unordered_map<int,int> f;

        int floor = nums.size()/3;

        for (auto n : nums) {
            if (++f[n] > floor) s.insert(n);
        }

        vector<int> r(s.begin(), s.end());
        
        return r;
    }
};
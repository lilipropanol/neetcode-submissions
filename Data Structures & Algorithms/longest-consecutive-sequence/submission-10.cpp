class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s (nums.begin(), nums.end());

        int r = 0;
        for (auto n : nums) {
            int aux_count = 1;
            
            if (s.find(n-1) != s.end()) continue;

            while (s.find(++n) != s.end()) aux_count++;
            r = max(r,aux_count);   
        }

        return r;
    }
};

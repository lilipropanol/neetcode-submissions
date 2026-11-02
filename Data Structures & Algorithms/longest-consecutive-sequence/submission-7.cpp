class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLen = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for (auto n : nums) {
            if (s.find(n-1) != s.end()) continue;

            int aux = 1;
            while (s.find(++n) != s.end()) aux++;
            maxLen = max(maxLen, aux);
        }
    
    return maxLen;
    }
};
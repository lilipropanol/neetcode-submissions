class Solution {

public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int best = 0;   
        for (int n : s) {
            if (s.find(n-1) != s.end()) continue;

            int count = 1;
            while (s.find(++n) != s.end()) count++;
            best = max(best,count);
        }

    return best;
    }
};


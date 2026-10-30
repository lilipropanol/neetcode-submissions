class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for (auto n : nums) {
            s.insert(n);
        }

        int max_length = 0;
        for (auto n : nums) {
            if (s.find(n-1) != s.end()) continue;
            
            int aux = 1;
            while (s.find(++n) != s.end()) aux++;
            max_length = max(max_length, aux);
        }

        return max_length;
    }
};

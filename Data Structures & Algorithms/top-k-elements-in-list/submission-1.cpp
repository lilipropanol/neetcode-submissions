class Solution {
private:

struct Compare {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int max = 0;
        unordered_map<int,int> freq;
        map<int,vector<int>, Compare> top_k;

        for (int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;
        
        for (auto [num, f] : freq) {
            top_k[f].push_back(num);
        }

        vector<int> sol;

        for (auto [f, nums] : top_k) {
            for (auto n : nums) {
                if (k == 0) return sol;

                sol.push_back(n);
                k--;
            }
        }

        return sol;
        
    }
};

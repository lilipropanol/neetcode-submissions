class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        
        // BUCKET SORT : O(n+k+O(1)) where k is the num of buckets
                    // O(1) is the time it takes to sort the individual buckets, usually negligible (O(1)) because they have little elements
                    // but in the worst case, all elems go to one same bucket and time is O(n+1+n) (provided the sorting alg. used for the buckets is (O(n)))
        
                    // in this ex. we don't need to sort the buckets, we just want to know their sizes. so it will always be O(N).

        // count frequencies; O(n)
        for (int i = 0; i < n; i++)
            freq[nums[i]]++;

        
        vector<vector<int>> buckets(n+1); // buckets of freqs. max freq is n so that will be the size
        
        // fill buckets of frequencies.
        for (auto it = freq.begin(); it != freq.end(); it++) // < O(n) (= O(n) when all nums have freq 1)
            buckets[it->second].push_back(it->first);

        // find k maxs
        vector<int> output;
        int count = k;
        for (int i = n; i > 0; i--) {
            if (count > 0 and !buckets[i].empty()) {
                for (int j = 0; count > 0 and j < buckets[i].size(); j++) {
                output.push_back(buckets[i][j]);
                count--;
            }
            }
        }
        return output;
    }

};

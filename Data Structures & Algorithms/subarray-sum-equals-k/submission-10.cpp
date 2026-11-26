class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;

        unordered_map<int, int> m; // {number sum, frequency}
        m[0] = 1;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            sum += a;

            int b = sum - k;

            if (m.find(b) != m.end()) count += m[b];

            m[sum]++;
        } 

        return count;       
    }
};


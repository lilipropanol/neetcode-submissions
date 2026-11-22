class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        // first pass: multiply everything on the left
        vector<int> lefts = nums;
        int count = 1;
        for (auto& l : lefts) {
            l = (count *= l);
        }

        // second pass: mutiply everything on the right
        vector<int> rights = nums;
        count = 1;
        for (int i = n-1; i >= 0; --i) {
            rights[i] = (count *= rights[i]);
        }

        // last pass: for each i, multiply the left part with the right part
        vector<int> r(n,1);
        for (int i = 0; i < n; i++) {
            if (i > 0 && i < n-1) r[i] = lefts[i-1]*rights[i+1];
            else if (i > 0) r[i] = lefts[i-1];
            else r[i] = rights[i+1];
        }

        return r;
    }
};

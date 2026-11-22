class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());

            groups[s].push_back(strs[i]);
        }

        vector<vector<string>> r;
        for (auto [s, group] : groups) {
            r.push_back(group);
        }

        return r;

    }
};

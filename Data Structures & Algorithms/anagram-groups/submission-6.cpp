class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;

        for (const auto& s : strs) {
            string key = s;
            sort(key.begin(), key.end());

            m[key].push_back(s);
        }

        vector<vector<string>> r;
        for (const auto& pair : m) {
            r.push_back(pair.second);
        }

        return r;
    }
};

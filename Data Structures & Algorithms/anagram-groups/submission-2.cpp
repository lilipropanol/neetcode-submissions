class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            vector<int> v(26,0);

            for (char c : word) {
                v[c-'a']++;
            }

            string key = to_string(v[0]);
            for (int j = 1; j < 26; ++j) {
                key += ',' + to_string(v[j]);
            }            

            groups[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto it = groups.begin(); it != groups.end(); ++it) {
            result.push_back(it->second);
        }

        return result;
    }
};

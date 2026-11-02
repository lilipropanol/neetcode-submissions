class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;

        for (auto s : strs) {
            string aux = s;
            sort(aux.begin(), aux.end());

            m[aux].push_back(s);
        }

        vector<vector<string>> r;
        for (auto it : m) {
            r.push_back(it.second);
        }
        return r;
    }
};

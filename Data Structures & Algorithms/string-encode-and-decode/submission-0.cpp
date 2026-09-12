class Solution {
private:
    unordered_map<string,vector<string>> m;

public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (const auto& s : strs) {
            encoded += s;
        }

        m[encoded] = strs;

        return encoded;        
    }

    vector<string> decode(string s) {
        return m[s];
    }
};
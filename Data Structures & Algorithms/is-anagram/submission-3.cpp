class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> S;
        unordered_map<char, int> T;

        for (const auto& sc : s) S[sc]++;
        for (const auto& tc : t) T[tc]++;

        return S == T;        
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> S;
        unordered_map<char,int> T;

        for (auto sc : s) S[sc]++;
        for (auto tc : t) T[tc]++;

        return S == T;
    }
};

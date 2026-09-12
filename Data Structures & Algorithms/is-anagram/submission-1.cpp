class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> S;
        map<char, int> T;

        for (int i = 0; i < s.size(); i++) {
            S[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            T[t[i]]++;
        }
        return (T == S);
    }
};

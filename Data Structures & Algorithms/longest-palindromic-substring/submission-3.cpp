class Solution {
private:
    int start = 0;
    int maxLength = 0;

    void expand_around_center(int left, int right, const string& s) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        
        if (right-left-1 > maxLength) {
            maxLength = right-left-1;
            start = left+1;
        }
    }

public:
    string longestPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
            expand_around_center(i,i,s);
            expand_around_center(i,i+1,s);
        }
        return s.substr(start,maxLength);
    }
};
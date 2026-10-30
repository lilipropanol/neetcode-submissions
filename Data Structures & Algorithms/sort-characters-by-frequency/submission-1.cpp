class Solution {
public:
    string frequencySort(string s) {
        // store letters with associated frquencies.
        // ordered map with frequency => vector of letters with that frequency

        // build result string

        unordered_map<char,int> freqs;
        map<int,string,greater<int>> m;

        for (auto i : s) freqs[i]++;

        for (const auto& [letter, freq] : freqs) {
            m[freq].append(freq,letter);
        }

        string r = "";
        for (const auto& [freq, s] : m) {
            r += s;
        }
        return r;
    }
};
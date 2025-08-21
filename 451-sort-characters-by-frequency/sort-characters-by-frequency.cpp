class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }

        vector<char> chars(s.begin(), s.end());

        sort(chars.begin(), chars.end(), [&](char a, char b) {
            if (freq[a] != freq[b]) return freq[a] > freq[b]; 
            return a < b; 
        });

        return string(chars.begin(), chars.end());
    }
};

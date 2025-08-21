class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqs[26]={0}, freqt[26]={0};
        if(s.length() != t.length()) return false;
        for(int i=0;i<s.length();i++){
            freqs[s[i]-'a']++;
            freqt[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freqs[i]!= freqt[i]) return false;
        }
        return true;
    }
};
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0); // store frequency of each character
        
        // count frequency of each character
        for(char c : s) {
            freq[c - 'a']++;
        }
        
        // find first character with frequency = 1
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1; // if no unique char
    }
};

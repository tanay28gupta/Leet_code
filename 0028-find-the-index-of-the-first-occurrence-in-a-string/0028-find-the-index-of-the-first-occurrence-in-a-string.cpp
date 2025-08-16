class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        // Loop through haystack, but stop early so we don't go out of range
        for (int i = 0; i <= n - m; i++) {
            // Check if substring starting from i matches needle
            int j;
            for (j = 0; j < m; j++) {
                if (haystack[i + j] != needle[j]) {
                    break; // mismatch found
                }
            }
            if (j == m) {
                return i; // found match
            }
        }
        return -1; // no match found
    }
};

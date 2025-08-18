class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";          // (A)

        string prefix = "";                    // (B)
        string first = strs[0];                // (C)

        // (D) i = character index in the first word
        for (int i = 0; i < first.size(); i++) {
            char c = first[i];                 // (E) character to check

            // (F) j = which word we're checking (start from 1, skip the first)
            for (int j = 1; j < strs.size(); j++) {
                // (G) out of range or mismatch => stop and return current prefix
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return prefix;
                }
            }

            // (H) if every word had the same char at position i, add it
            prefix += c;
        }

        return prefix;                         // (I)
    }
};

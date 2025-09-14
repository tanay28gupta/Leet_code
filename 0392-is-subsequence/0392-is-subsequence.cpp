class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=0;
        for (int i=0;i<t.size();i++)
        {
            if(n<s.size() && s[n]==t[i])
            {
                n++;
            }
        }

        return (n==s.size());
    }
};
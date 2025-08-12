class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int>value={
           {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
       };
       int res=0;
       for(int i=0;i<s.size();i++)
       {
        if(value[s[i]]<value[s[i+1]])
        {
            res -= value[s[i]];
        }
        else{
            res += value[s[i]];
        }
       }
       return res;
    }
};
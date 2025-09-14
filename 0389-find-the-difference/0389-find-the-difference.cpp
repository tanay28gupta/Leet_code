class Solution {
public:
    char findTheDifference(string s, string t) {
      for(char c:t)
      {
        int counting=count(s.begin(),s.end(),c);
        int cunt =count(t.begin(),t.end(),c);
        if(counting!=cunt)
        {
            return c;
        }
      }
      return 0;

    }
};
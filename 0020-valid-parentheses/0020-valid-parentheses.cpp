class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> a;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{'||s[i]=='['||s[i]=='(')
            {
                a.push(s[i]);
            }
            else{
                if(a.empty())
                {
                    return false;
                }
                else
                {
                    char top=a.top();
                    a.pop();
                    if((s[i]==')'&& top!='(') || (s[i]=='}' && top!='{') || (s[i]==']' && top!='['))
                    {
                        return false;
                    }


                }
            }
        }
      if(a.empty())
      {
        return true;
      }  
    else{
        return false;
    }
    }
};


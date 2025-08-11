class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' ||s[i]=='['||s[i]=='{')
            {
                v.push(s[i]);
            }
            else
            {
                if (v.empty())
            {
                return false;
            }
            else{
                char top=v.top();
                v.pop();

                if ((s[i] == ')' && top != '(') ||
                        (s[i] == ']' && top != '[') ||
                        (s[i] == '}' && top != '{')) {
                            return false;
                
            }

            }
        }
        }
   if (v.empty()) {
            return true;
        } 
        else {
            return false;
        }
    }
};
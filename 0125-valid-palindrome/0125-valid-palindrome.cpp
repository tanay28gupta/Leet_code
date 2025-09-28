class Solution {
public:
    bool isPalindrome(string s) {
        //CONVERTING ALL THE LETTERS INTO LOWER CASE LETETRS AND THEN removing any removing any non alphanumeric leters and numbers and then it should read same forward and backwords.
    int n=s.size();
    string cleaned="";
    for (int i=0;i<n;i++)
    {
        char c=s[i];
        if(isalnum(c))
        {
            cleaned+=tolower(c);
        }
    }
        string reversed =cleaned;
        reverse(reversed.begin(),reversed.end());
        if(cleaned==reversed)
        {
            return true;
        }
   
    
             return false;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        //CONVERTING ALL THE LETTERS INTO LOWER CASE LETETRS AND THEN removing any removing any non alphanumeric leters and numbers and then it should read same forward and backwords.
        string cleaned="";
        for (size_t i=0;i<s.size();++i){
            char c=s[i];
            if (isalnum(c)){
                cleaned += tolower(c);
            }
        }

        string reversed =cleaned;
        reverse(reversed.begin(),reversed.end());
        
        return cleaned==reversed;


        
    }
};
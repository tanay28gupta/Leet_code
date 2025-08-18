class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if(strs.empty()) return "";
       
       string prefix ="";
       string first=strs[0];
       for(int i=0;i<first.size();i++)
       {
        char c=first[i];
    
       // now well check it with the other words the forst character of the word and if they're same then we'll store it in the the prefix variable that we have created above
       for(int j=1;j<strs.size();j++)
       {
        if(i>strs[j].size() || strs[j][i] != c)
        {
            return prefix;
        }
       }
       prefix +=c;

       }
return prefix;
    }
};




//  make the size of the word store in the variable
// then after storing the size make the indexes compare line by line what ever is same between all the words make them store in the length of the variabla then return the variable to get the result 
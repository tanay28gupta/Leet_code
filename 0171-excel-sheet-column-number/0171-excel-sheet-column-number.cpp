class Solution {
public:
    int titleToNumber(string columnTitle) {
        long result=0;
        for (char c: columnTitle )
        {
            int value= c - 'A' + 1;
            result = result*26+value;
        }
        return result;


        
    }
};

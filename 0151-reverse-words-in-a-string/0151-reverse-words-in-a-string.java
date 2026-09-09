class Solution {
    public String reverseWords(String s) {
        s=s.trim();// this part of the code removes the leadng and trailing spaces 


        StringBuilder ans =new StringBuilder();
        String[] word=s.split("\\s+");

        for (int i=word.length-1;i>=0;i--)
        {
            ans.append(word[i]);
            if(i!=0){
            ans.append(" ");
            }
        }

       return ans.toString();
    }
}
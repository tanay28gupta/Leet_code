class Solution {
    public boolean rotateString(String s, String goal) {

        //whenever you are starting a question keep in mind the return type of the function for this question its boolean so we need to return the true or false we can also see that in the test cases as well
        int n=s.length();

        // we are creating a new string builder for the new string to be made
        StringBuilder ans=new StringBuilder(s);// here ,meaning of s is that the new string builder is same as the string s in the question
        //we are using the string builder because in java the strings are immutable
        while(n>0)
        {
            if(ans.toString().equals(goal))
            {
                return true;
            }
            char ch=  ans.charAt(0);
            ans.deleteCharAt(0);
            ans.append(ch);
            n--;
        }

        return false;
    }
}
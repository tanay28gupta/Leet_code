class Solution {
    public boolean isPalindrome(String s) {
        // in this code what we have to do is that we need to clean the string that is given and then remove the spaces and then reverse the string and then make it equal to get the palindrome 

        String clean="";
        // npw start with the step of keeping the letter and the digits int the array and removing the spaces and converting them to lower case

        for (int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if (Character.isLetterOrDigit(ch))
            {
                clean = clean + Character.toLowerCase(ch);    
            }

        }

        String reversed ="";
        for (int i=clean.length()-1;i>=0;i--)
        {
            reversed=reversed +clean.charAt(i);
        }

        return clean.equals(reversed);
    }
}
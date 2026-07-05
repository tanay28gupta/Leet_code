class Solution {
    public String multiply(String nums1, String nums2) {
        if(nums1.equals("0")||nums2.equals("0"))
        {
            return "0";
        }
        int n=nums1.length();
        int m=nums2.length();
        int [] res =new int[n+m];

        for (int i=n-1;i>=0;i--)
        {
            int a=nums1.charAt(i)-'0';
            for (int j=m-1;j>=0;j--)
            {
                int b=nums2.charAt(j)-'0';
                int mul=a*b;

                int sum=mul+res[i+j+1];
                res[i+j+1] =sum%10;
                res[i+j] += sum/10;

            }
           
        }
         StringBuilder ans=new StringBuilder();
            for(int num: res)
            {
                if (ans.length()==0 && num==0)
                {
                    continue;
                }
                ans.append(num);
            }
            return ans.toString();
        }
}
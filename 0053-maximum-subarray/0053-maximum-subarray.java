class Solution {
    public int maxSubArray(int[] nums) {

        int count =0;
        int maxcount=Integer.MIN_VALUE;
        for (int i=0;i<nums.length;i++)
        {
            count= count+nums[i];
            if (count>maxcount)
            {
                maxcount=count;
            }
            if (count<0)
            {
                count =0;
            }
            
        }
        return maxcount;
        
    }
}
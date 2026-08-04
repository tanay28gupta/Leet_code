class Solution {
    public int singleNumber(int[] nums) {
        Arrays.sort(nums);
        if (nums.length==1)
        {
            return nums[0];
        }

        for (int i=0;i<nums.length-1;i+=2)
        //here we are doing the +2 because if the the nums[i] is equal to the nums[i+1] then we need to skip thosetwo numbers and then take in account the next numbers
        {
           if( nums[i] !=nums[i+1]){
            return nums[i];}
        }
        //Here we are using this return statement if the array has been traversed in the full and every pair is matched then the last element would be the answer and the remaining single element;
        return nums[nums.length-1];
    }
}
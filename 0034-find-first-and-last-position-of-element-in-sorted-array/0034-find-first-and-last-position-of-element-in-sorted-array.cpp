class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1;
        int last=-1;
       
        for (int i=0;i<n;i++)
        {
            if (nums[i]==target)
            {
              first=i;
            
            while(i<n &&nums[i]==target)
            {
                i++;
            }
            last =i-1;
            }
        }
        return {first,last};
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int answer=0;
        int max_count=0;
        for (int i=0;i<n;i++)
        {
            if (nums[i]==1)
            {
                answer++;
                max_count = max(max_count,answer);
            }
            else{
                
                answer=0;
            }
        }
       return max_count; 
    }
};
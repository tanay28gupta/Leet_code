class Solution {
    public int shipWithinDays(int[] weights, int days) {

        int low =0;
        int high=0;
        for (int i=0;i<weights.length;i++)
        {
            low=Math.max(low,weights[i]);
            high += weights[i];
        }

        while(low<=high)
        {
            int mid=low+ (high-low)/2;
            if(possible(weights,days,mid))
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }

    public boolean possible(int [] weights, int days, int capacity)
    {
        int currentweight=0;
        int requireddays=1;
        for (int i=0;i<weights.length;i++)
        {
            if(currentweight+weights[i]<=capacity)
            {
                currentweight += weights[i];
            }
            else{
                requireddays++;
                currentweight=weights[i];
            }
        }
        return requireddays<= days;
    }


}
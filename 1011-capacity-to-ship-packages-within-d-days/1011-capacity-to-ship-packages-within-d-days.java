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
            // in this code as well as other codes we are using the mid to calculate like high - low by 2 then adding low because of the value overflow for the int condition refer to the ijnt value 
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
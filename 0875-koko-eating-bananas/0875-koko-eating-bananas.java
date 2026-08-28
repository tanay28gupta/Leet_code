class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int low =1;
        // in this cdoe we are taking the low and high as the eating speeds of koko so the eating speed cant be 0 thats wy we are taking the low as 1 in the start
        int high=0;

        for (int i=0;i<piles.length;i++)
        {
            if(piles[i]>high)
            {
                high=piles[i];
            }
        }

        while (low<=high)
        {
            int mid=low+(high-low)/2;
            long totalhours=calhours(piles,mid);
            if(totalhours<=h)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }


        } 
        return low;
  
    }

    private long calhours(int[] piles, int speed)
    {
        long totalhours=0;
        for (int i=0;i<piles.length;i++)
        {
            long hoursforcurrentpile=((long)piles[i]+speed-1)/speed;
            totalhours=totalhours+hoursforcurrentpile;
        }
        return totalhours;
    }
}
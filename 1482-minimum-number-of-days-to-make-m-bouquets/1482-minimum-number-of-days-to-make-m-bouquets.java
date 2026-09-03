class Solution {
    public int minDays(int[] bloomDay, int m, int k) {
        if((long)m*k>bloomDay.length)
        {
            return -1;
        }

        // code to find the minimum and maximum in the array for the possibility part
        int low=Integer.MAX_VALUE;
        int high=Integer.MIN_VALUE;
        for (int i=0;i<bloomDay.length;i++)
        {
            low=Math.min(low,bloomDay[i]);
            high=Math.max(high, bloomDay[i]);
        }

        //code for the binary search;
        while (low<=high)
        {
            int mid=(low+high)/2;
            if(possible(bloomDay,m,k,mid))
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return low;
    }

    public boolean possible(int [] bloomDay, int m,int k, int day)
    {
        int flower=0;
        int boquet=0;
        for (int i=0;i<bloomDay.length;i++)
        {
            if(bloomDay[i]<=day)
            {
                flower++;
                if(flower==k)
                {
                    boquet++;
                    flower=0;
                }
            }
            else{
                flower=0;
            }
            if(boquet==m)
            {
                return true;
            }
        }
        return false;
    }
}
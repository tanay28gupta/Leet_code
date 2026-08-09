class Solution {
    public int maxProfit(int[] prices) {
        int buy=prices[0];
        int maxprofit=0;
        for (int i=0;i<prices.length;i++)
        {
            if (prices[i]<buy)
            {
                buy=prices[i];
            }
            else{
                int current_profit=prices[i]-buy;
                maxprofit=Math.max(current_profit,maxprofit);

            }
        }
        
        return maxprofit;
    }
}
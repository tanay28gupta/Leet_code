class Solution {
public:
    int mySqrt(int x) {
        if (x==0||x==1)
        {
            return x;
        }
      long long i;
         while(i*i<=x)
         {
             i++;
        }
        
        // for ( i=1;i*i <=x ;i++)
        // {

        // }
        return i-1;
    }
};
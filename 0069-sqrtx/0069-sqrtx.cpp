class Solution {
public:
    int mySqrt(int x) {
        if (x==0||x==1)
        {
            return x;
        }
        //int i=1;
        // while(i*i<=x)
        // {
        //     i++;
        // }
        long long i;
        for ( i=1;i*i <=x ;i++)
        {

        }
        return i-1;
    }
};
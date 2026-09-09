class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        {
            return 0;
        }
        long x=1;
        while(x<n)
        {
            x*=2;//x<<=1;
        }
        return x==n;
    }
};
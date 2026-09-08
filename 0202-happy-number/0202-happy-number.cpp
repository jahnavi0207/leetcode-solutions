class Solution {
public:
    int ds(int n)
    {
        int s=0;
        while(n)
        {
            s+=(n%10)*(n%10);
            n=n/10;
        }
        return s;
    }
    bool isHappy(int n) {
        int f=n,s=n;
        do{
            f=ds(ds(f));
            s=ds(s);
        }while(f!=s);
        if(f==1)return 1;
        return 0;
    }
};
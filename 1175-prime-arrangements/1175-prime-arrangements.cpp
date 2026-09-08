class Solution {
    int m=1e9+7;
public:
    bool isprime(int n) {
        for(int i=2;i*i<=n;i++){
            if(n%i==0)return 0;
        }
        return 1;        
    }
    long fact(int n){
        long f=1;
        for(int i=1;i<=n;i++){
            f=(f*i)%m;
        }
        return f%m;
    }
    int numPrimeArrangements(int n){
        int c=0;
        for(int i=2;i<=n;i++){
            if(isprime(i))c++;
        }
        long res=(1l*fact(c)*fact(n-c))%m;
        return res;
    }

};
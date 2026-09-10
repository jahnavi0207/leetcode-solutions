class Solution {
public:
    string addBinary(string a, string b) {
         int i=a.size()-1,j=b.size()-1;
        int c=0;string res;
        while(i>=0||j>=0||c){
            int s=c;
            if(i>=0){s+=a[i]-'0';i--;}
            if(j>=0){s+=b[j--]-'0';}
            if(s==3){res=res+'1'; c=1;}
            else if(s==2){res+='0';c=1;}
            else if(s==1){res+='1';c=0;}
            else {res+='0';c=0;}
        }
        reverse(res.begin(),res.end());
        return res;

    }
};
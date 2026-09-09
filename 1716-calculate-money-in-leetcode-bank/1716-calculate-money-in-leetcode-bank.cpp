class Solution {
public:
    int totalMoney(int n) {
        int weeks=n/7,rm=n%7;
        return weeks*28+7*(weeks*(weeks-1)/2)+rm*(weeks+1)+(rm*(rm-1)/2);
    }
};
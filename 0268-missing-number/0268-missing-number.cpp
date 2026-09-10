class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=n*(n+1)/2;
        int sa=accumulate(nums.begin(),nums.end(),0);
        return s-sa;
    }
};
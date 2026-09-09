class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int e:nums)
        {
            mp[e]++;
        }
        for(auto[k,v]:mp)
        {
            if(v>n/2)return k;
        }
        return -1;
    }
};
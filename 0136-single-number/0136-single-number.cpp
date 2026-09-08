class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int e:nums)
        {
            int c=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==e)
                {
                    c++;
                }
            }
            if(c==1)return e;
        }
        return -1;
    }
};
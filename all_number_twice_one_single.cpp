class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int value=0;
        int i,j,k,n=nums.size();
        for(i=0;i<n;i++)
        {
            value=value^nums[i];
        }
        return value;
    }
};

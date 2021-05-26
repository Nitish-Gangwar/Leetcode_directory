class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int i,j,k;
        int local_sum=0,global_sum=0;
        int size1=nums.size();
        for(i=0;i<size1;i++)
        {
            local_sum+=nums[i];
            if(global_sum==0 && local_sum<0 && i==0)
                global_sum=local_sum;
            if(local_sum>global_sum)
                global_sum=local_sum;
            if(local_sum<0)
                local_sum=0;
        }
        return global_sum;
    }
};

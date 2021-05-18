class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int i,j,k,l,m;
        int size1=nums.size();
        vector<vector<int> > vec;
        if(size1<=2)
            return vec;
        sort(nums.begin(),nums.end());
        
        for(i=0;i<size1;i++)
        {
            if(i>0 && nums[i-1]==nums[i])
                continue;
            int start=i+1;
            int end=size1-1;
            while(start<end)
            {
                int tempsum=(nums[i]+nums[start]+nums[end]);
                if(tempsum > 0)
                {
                    end--;
                }
                else if(tempsum < 0)
                {
                    start++;
                }
                else
                {
                    vector<int> tvec;
                    tvec.push_back(nums[i]);
                    tvec.push_back(nums[start]);
                    tvec.push_back(nums[end]);
                    vec.push_back(tvec);
                    start++;
                    while((nums[start]==nums[start-1]) && (start<end))
                        start++;
                }
            }
            
        }
        return vec;
        
    }
};

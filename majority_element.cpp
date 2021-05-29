class Solution {
public:
 int majorityElement(vector<int>& nums)
    {
        int i,j,k;
        sort(nums.begin(),nums.end());

        int start=0;
        int end=nums.size()-1;
        int middle=start+(end-start)/2;
        return nums[middle];
    }
};

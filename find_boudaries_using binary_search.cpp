class Solution {
public:
    int find_left_index(vector<int>& nums,int target,int start,int end)
    {
        int middle=0;
        int s=nums.size()-1;
        if(s==0)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        while(start<=end)
        {
            middle=start+(end-start)/2;
            if(nums[middle]>=target)
            {
                end=middle-1;
            }
            else
            {
                start=middle+1;
            }
        }
        if(start>=0 && start<=s && nums[start]==target)
        {
            return start;
        }
        return -1;
    }
    int find_right_index(vector<int>& nums,int target,int start,int end)
    {
        int middle=0;
        int s=nums.size()-1;
        if(s==0)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        while(start<=end)
        {
            middle=start+(end-start)/2;
            if(nums[middle]<=target)
            {
                start=middle+1;
            }
            else
            {
                end=middle-1;
            }
        }
        if(end>=0 && end<=s && nums[end]==target)
        {
            return end;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int i,j,k;
        int start=0,end=nums.size()-1;
        if(end==-1)
            return {-1,-1};
        int left=-1,right=-1;
        left = find_left_index(nums,target,start,end);
        right= find_right_index(nums,target,start,end);
        return {left,right};
    }
};

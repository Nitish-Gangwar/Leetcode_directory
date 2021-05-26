class Solution {
public:
    int findPivot(vector<int>& nums,int target,int start,int end)
    {
        int index=-1;
        if(start==end)
            return index;
        if(end<start)
            return -1;
        int mid=start+(end-start)/2;

        if(mid<end && nums[mid]>nums[mid+1])
        {
            return mid;
        }
        else if(start<mid && nums[mid]<nums[mid-1])
        {
            return mid-1;
        }
        else if(nums[start]>nums[mid])
            return findPivot(nums,target,start,mid-1);

        return findPivot(nums,target,mid+1,end);
    }
int binarySearch(vector<int>& nums, int target,int start,int end)
{	                       //0  1 2 3 4 5 6 7
	while(start<=end)	// {10,11,1,3,4,5,6,9}
	{
		int middle=start+(end-start)/2;
		if(nums[middle]==target)
		{
			return middle;
		}
		else if(nums[middle]<target)
		{
			start=middle+1;
		}
		else
		{
			end=middle-1;
		}
	}
	return -1;
}
int findIndex(vector<int>& nums, int target,int start,int end,int pivot)
{
	int i,j,k;
	if(pivot==-1)
	{
		return binarySearch(nums,target,start,end);
	}
	else
	{
        if(nums[pivot]==target)
        {
			return pivot;
		}
		else if(nums[start]<=target && pivot!=0 && nums[pivot-1]>=target )
		{
			start=0;
			end=pivot-1;
			return binarySearch(nums,target,start,end);
		}
		else if(nums[pivot+1]<=target && pivot!=nums.size()-1 && nums[end]>=target )
		{
			start=pivot+1;
			end=end;
			return binarySearch(nums,target,start,end);
		}
        else
        {
            return -1;
        }
		
	}
	return -1;
}
int search(vector<int>& nums, int target) 
    {
        int start=0,index=-1;
        int end=nums.size()-1;
        int ele=findPivot(nums,target,start,end);
        //cout<<"pivot is at "<<ele<<endl;
        if(ele==-1)
            index=findIndex(nums,target,start,end,ele);
        else
            index=findIndex(nums,target,start,end,ele);
        return index;
    }
};class Solution {
public:
    int findPivot(vector<int>& nums,int target,int start,int end)
    {
        int index=-1;
        if(start==end)
            return index;
        if(end<start)
            return -1;
        int mid=start+(end-start)/2;

        if(mid<end && nums[mid]>nums[mid+1])
        {
            return mid;
        }
        else if(start<mid && nums[mid]<nums[mid-1])
        {
            return mid-1;
        }
        else if(nums[start]>nums[mid])
            return findPivot(nums,target,start,mid-1);

        return findPivot(nums,target,mid+1,end);
    }
int binarySearch(vector<int>& nums, int target,int start,int end)
{	                       //0  1 2 3 4 5 6 7
	while(start<=end)	// {10,11,1,3,4,5,6,9}
	{
		int middle=start+(end-start)/2;
		if(nums[middle]==target)
		{
			return middle;
		}
		else if(nums[middle]<target)
		{
			start=middle+1;
		}
		else
		{
			end=middle-1;
		}
	}
	return -1;
}
int findIndex(vector<int>& nums, int target,int start,int end,int pivot)
{
	int i,j,k;
	if(pivot==-1)
	{
		return binarySearch(nums,target,start,end);
	}
	else
	{
        if(nums[pivot]==target)
        {
			return pivot;
		}
		else if(nums[start]<=target && pivot!=0 && nums[pivot-1]>=target )
		{
			start=0;
			end=pivot-1;
			return binarySearch(nums,target,start,end);
		}
		else if(nums[pivot+1]<=target && pivot!=nums.size()-1 && nums[end]>=target )
		{
			start=pivot+1;
			end=end;
			return binarySearch(nums,target,start,end);
		}
        else
        {
            return -1;
        }
		
	}
	return -1;
}
int search(vector<int>& nums, int target) 
    {
        int start=0,index=-1;
        int end=nums.size()-1;
        int ele=findPivot(nums,target,start,end);
        //cout<<"pivot is at "<<ele<<endl;
        if(ele==-1)
            index=findIndex(nums,target,start,end,ele);
        else
            index=findIndex(nums,target,start,end,ele);
        return index;
    }
};

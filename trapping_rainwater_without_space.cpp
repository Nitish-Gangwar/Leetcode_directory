class Solution {
public:
    int trap(vector<int>& height) 
    {
        int i,j,k;
        int size1=height.size();
        if(size1==0 || size1==1)
            return 0;
        
        int leftmax=0,rightmax=0;
        int low=0,high=size1-1;
        int stored_water=0;
        while(low<high)
        {
            if(height[low]<height[high])
            {
                if(leftmax<height[low])
                    leftmax=height[low];
                else
                {
                    stored_water+=leftmax-height[low];
                }
                low++;
            }
            else//height[low]>height[high]
            {
                if(height[high]>rightmax)
                    rightmax=height[high];
                else
                    stored_water+=rightmax-height[high];
                high--;
            }
        }
        return stored_water;
    }
};

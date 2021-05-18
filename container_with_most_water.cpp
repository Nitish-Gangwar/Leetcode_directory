class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int start,end,i,j,k;
        int size1=height.size();
        start=0;
        end=size1-1;
        int area=0;
        while(start<end)
        {
            area=max(area,min(height[start],height[end])*(end-start));
            //cout<<area<<endl;
            if(height[start]<height[end])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return area;
    }
};

class Solution {
public:
    int trap(vector<int>& height) 
    {
        int i,j,k;
        int size1=height.size();
        if(size1==0 || size1==1)
            return 0;
	int maxi[30001]={0},mini[30001]={0};
        int maximum=0,minimum=0;
        maxi[0]=height[0];
        mini[size1-1]=height[size1-1];
        for(i=1;i<size1;i++)
        {
            maxi[i]=max(maxi[i-1],height[i]);
            mini[size1-i-1]=max(mini[size1-i],height[size1-i-1]);
        }
        int sumtotal=0;
        for(i=0;i<size1;i++)
        {
            //cout<<maxi[i]<<" "<<mini[i]<<endl;
            sumtotal+=min(maxi[i],mini[i])-height[i];
        }
        return sumtotal;
    }
};

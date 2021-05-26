class Solution {
public:
    int climbStairs(int n) 
    {
        int i,j,k;
        int arr[50]={0};
        arr[1]=1;
        arr[2]=2;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        else
            for(i=3;i<=n;i++)
            {
                arr[i]=arr[i-1]+arr[i-2];
            }
        return arr[n];
    }
};

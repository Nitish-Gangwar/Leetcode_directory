#include<bits/stdc++.h>
using namespace std;
void generate_pattern(vector<int>& nums,int start,int end,vector<vector<int>>& vec,vector<int>& temp)
    {
        if(start==end)
        {
            vec.push_back(temp);
            int i;
            for(i=0;i<temp.size();i++)
            {
            	cout<<temp[i]<<" ";
            }
            cout<<"\n";
            return;
        }
        int i;
        for(i=start;i<end;i++)
        {
            temp.push_back(nums[i]);
            generate_pattern(nums,i+1,end,vec,temp);
            temp.pop_back();
        }
        return;
    }
    int main()
    {
    	vector<int> nums={1,2,3};
        int nums_size=nums.size();
        vector<vector<int>> vec;
        vector<int> temp;
        generate_pattern(nums,0,nums_size,vec,temp);
    }

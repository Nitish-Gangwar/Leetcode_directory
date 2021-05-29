#include<bits/stdc++.h>
using namespace std;
void generate_pattern(vector<int>& arr,int start,int end,vector<int>& nums)
{
	int i,j,k;
	if(start==end)
	{
		
		for(i=0;i<start;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	for(i=0;i<end;i++)
	{
		arr.push_back(0);
		generate_pattern(arr,start+1,end,nums);
		arr.pop_back();
		arr.push_back(1);
		generate_pattern(arr,start+1,end,nums);
		arr.pop_back();
	}
	
	
	return;
}
int main()
{
	int i,j,k,digits=3;
	vector<int> arr;
	vector<int> nums={0,1};
	vector<int> digits_arr;
	generate_pattern(arr,0,digits,digits_arr);
	return 0;
}

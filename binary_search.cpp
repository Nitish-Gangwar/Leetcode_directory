#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int key,int start,int end)
{
	int i,j,k,middle;
	while(start<end)
	{
		middle=(start+end)/2;
		if(arr[middle]==key)
		{
			return middle;
		}
		else if(arr[middle]<key)
		{
			start=middle+1;
			end=end;
		}
		else
		{
			start=start;
			end=middle-1;
		}
		
	}
	if(arr[start]==key)
	return start;
	return -1;
}
int main()
{
	int i,j,k,n,key;
	int arr[]={-1, 2, 3, 5, 6, 8, 9, 10};
	int arr_size=sizeof(arr)/sizeof(int);
	cout<<"size of array = "<<arr_size<<endl;
	/*for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}*/
	cout<<"enter the value of the key to be searched"<<endl;
	cin>>key;
	int val=binary_search(arr,key,0,arr_size-1);
	if(val!=-1)
	{
		cout<<"value found at index"<<val<<endl;
	}
	else
	{
		cout<<"value "<<key<<" not found\n";
	}
	return 0;
}

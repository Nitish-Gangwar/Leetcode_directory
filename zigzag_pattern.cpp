#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,ispace,iispace,numrows;
	cin>>numrows;
	ispace=numrows-2;
	iispace=0;
	for(i=0;i<numrows;i++)
	{
		cout<<"*";//st[i];
		for(j=0;j<ispace;j++)
		{
			cout<<" ";
		}
		if(i!=numrows-1)
		cout<<"*";//st[
		if(i!=0)
		{
			for(j=0;j<iispace;j++)
			{
				cout<<" ";
			}
			cout<<"*";
		}
		
		for(j=0;j<ispace;j++)
		{
			cout<<" ";
		}
		if(i!=numrows-1)
		cout<<"*";
		if(i!=0)
		{
			for(j=0;j<iispace;j++)
			{
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<"\n";
		ispace--;
		if(i!=0)
		{
			iispace++;	
		}
	}
}

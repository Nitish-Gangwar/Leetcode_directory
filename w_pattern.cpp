#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ispace,inspace,iispace;
	int i,j,k,numrows;
	cin>>numrows;
	inspace=2*(numrows-1)-1;
	iispace=1;
	ispace=0;
	for(i=0;i<numrows;i++)
	{
		// first space will be printed
		for(j=0;j<ispace;j++)
		{
			cout<<" ";
		}
		//single start will be printed here
		cout<<"*";
		// inspace will be printed 
		for(j=0;j<inspace;j++)
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
		}
		if(i!=0)
		cout<<"*";
		for(j=0;j<inspace;j++)
		{
			cout<<" ";
		}
		if(i!=numrows-1)
		cout<<"*";
		cout<<"\n";
		ispace++;
		inspace-=2;
		if(i!=0)
		iispace+=2;
		
	}
	return 0;
}

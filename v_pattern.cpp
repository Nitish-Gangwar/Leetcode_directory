#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int space=0,inspace;
	int numrows;
	cin>>numrows;
	inspace=2*(numrows-1)-1;
	for(i=0;i<numrows;i++)
	{
		for(j=0;j<space;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(j=0;j<inspace;j++)
		{
			cout<<" ";
		}
		if(i!=numrows-1)
		cout<<"*\n";
		inspace-=2;
		space++;
	}
	cout<<"\n";
	return 0;
}

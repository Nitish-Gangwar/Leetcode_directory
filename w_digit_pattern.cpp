#include<bits/stdc++.h>
using namespace std;
int main()
{
	int space,inspace,iispace,numrows,i,j,k;
	string st="IITBombay-Google";
	int len=st.length();
	cin>>numrows;
	space=0;
	inspace=2*(numrows-1)-1;
	iispace=1;
	int count;
	for(i=0;i<numrows;i++)
	{
		count=i;
		for(j=0;j<space;j++)
		{
			cout<<" ";
		}
		if(count<len)
		cout<<st[count];
		count++;
		for(j=0;j<inspace;j++)
		{
			cout<<" ";
			count++;
		}
		if(i!=numrows-1)
		{
			if(count<len)
			cout<<st[count];
			count++;
		}
		if(i!=0)
		{
			for(j=0;j<iispace;j++)
			{
				cout<<" ";
				count++;
			}
			if(count<len)
			cout<<st[count];
			count++;
		}
		for(j=0;j<inspace;j++)
		{
			cout<<" ";
			count++;
		}
		if(i!=numrows-1)
		{
			if(count<len)
			cout<<st[count];
		}
		cout<<"\n";
		space++;
		inspace-=2;
		if(i!=0)
		{
			iispace+=2;
		}
	}
}

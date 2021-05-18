#include<bits/stdc++.h>
using namespace std;
void generate_b_p(int pos,int n,int open,int close,string st)
{
	if(n==close)
	{
		st[pos]='\0';
		cout<<st<<endl;
		return;
	}
	if(open>close)
	{
		st[pos]=')';
		generate_b_p(pos+1,n,open,close+1,st+st[pos]);
	}
	if(open<n)
	{
		st[pos]='(';
		generate_b_p(pos+1,n,open+1,close,st+st[pos]);
	}
	return;
}
int main()
{
	int i,j,k,n;
	cout<<"enter the number of parenthesis\n";
	cin>>n;
	string st;
	generate_b_p(0,n,0,0,st);
	return 0;
}

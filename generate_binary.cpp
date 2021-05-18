#include<bits/stdc++.h>
using namespace std;

void generate_string(string st,int start,int end)
{
	if(start>end)
	{
		st[start]='\0';
		cout<<st<<endl;
		return;
	}
	st[start]='0';
	generate_string(st+st[start],start+1,end);
	st[start]='1';
	generate_string(st+st[start],start+1,end);
	return;
}
int main()
{
	int i,j,k,n;
	cout<<"enter the number of digits\n";
	cin>>n;
	string st;
	generate_string(st,0,n-1);
	return 0;
}

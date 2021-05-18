#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	string str;
	cout<<"enter the string\n";
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>str;
	int lth=str.length();
	for(i=0;i<lth;i++)
	{
		for(j=1;i+j<=lth;j++)
		{
			string st=str.substr(i,j);
			cout<<st<<endl;
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

void generate_pattern(map<char,string> codes,string digits,int start,int end,string st)
{
	if(start>=end)
	{
		st[start]='\0';
		cout<<st<<endl;
		return;
	}
	int i,j,k;
	for(j=0;j<codes[digits[start]].length();j++)
	{
		st[start]=codes[digits[start]][j];
		//cout<<"st[i]= "<<st[i]<<endl;
		generate_pattern(codes,digits,start+1,end,st+st[start]);
	}
	return;
}

int main()
{
	map<char,string> codes;
        codes['2']="abc";
        codes['3']="def";
        codes['4']="ghi";
        codes['5']="jkl";
        codes['6']="mno";
        codes['7']="pqrs";
        codes['8']="tuv";
        codes['9']="wxyz";
        string st,digits;
        cout<<"enter the digits"<<endl;
        cin>>digits;
        generate_pattern(codes,digits,0,digits.length(),st);
}

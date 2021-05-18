#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int s,target;
	vector<int> indices;
        map<pair<int,int>,int> m;
        int i,j,temp;
        cout<<"give size and target as input then array elements\n";
	cin>>s>>target;
	vector<int> nums;
	cout<<"size= "<<s<<endl;
	for(i=0;i<s;i++)
	{
		cin>>temp;
		nums.push_back(temp);
	}
	//cout<<"working fine\n";
        for(i=0;i<s;i++)
        {
            m[{nums[i],i}]=0;
        }
        map<pair<int,int>,int>::iterator it1;
       	int flag=0;
       	int county=0;
       	for(it1=m.begin();it1!=m.end();it1++)
       	{
       		pair<int,int> p = it1->first;
       		if(m.find 
       	}
       	return 0;
        /*
        for(it1=m.begin();it1!=m.end();it1++)
        {
        	//cout<<(it1->first).first<<" "<<(it1->first).second<<endl;
        	cout<<((it1->first).first)<<(target-nums[i])<<endl;
        	if((m.find({(it1->first).first)==(target-nums[i])) && (m.find((it1->first).second)!=i))
        	{
        		cout<<"got the target at "<<i<<(it1->first).second<<endl;
        		flag=1;
        		break;
        	}
        	
        }
        
        
        for(i=0;i<s;i++)
        {
        	//cout<<((m.first).first)<<target-nums[i]<<endl;
        	pair<int,int> p=m.first;
        	cout<<p.first<<" "<<p.second<<endl;
        	/*
        	if((m.find({(m.first).first,i})==(target-nums[i])) && (m.find((m.first).second)!=i))
        	{
        		cout<<"got the target at "<<i<<(m.first).second<<endl;
        		flag=1;
        		break;
        	}
        }
        
        if(flag==0)
        {
        	cout<<"nothing found\n";
        }
        return 0;
        for(i=0;i<size;i++)
        {
            if(m.find({nums[i],i}))    
        }
        */
}

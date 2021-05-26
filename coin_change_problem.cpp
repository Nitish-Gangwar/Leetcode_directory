#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> combinationSum(vector<int>& candidates, int target)
{
	
	int i,j,k;
	vector<int> candi;
	int coins_size=candidates.size();
	
	
	//cout<<"size of coins is "<<coins_size<<endl;
	candi.push_back(0);
	for(i=1;i<=coins_size;i++)
	{
		//cout<<candidates[i]<<" "<<candidates[i-1]<<endl;
		candi.push_back(candidates[i-1]);
		
	}
	
	coins_size=candi.size();
	//cout<<"coins array size = "<<coins_size<<endl;
	vector<vector<int>> combination(target+1,vector<int> (coins_size));
	vector<vector<int>> change(target+1 , vector<int> (coins_size));
	
	for(i=0;i<coins_size;i++)
	{
		cout<<candi[i]<<" "<<endl;
	}
	
	for(i=0;i<=target;i++)
	{
		change[i][0]=0;
	}
	for(i=0;i<coins_size;i++)
	{
		change[0][i]=1;
	}
	
	for(i=1;i<=target;i++)
	{
		for(j=1;j<coins_size;j++)
		{
			int value=0;
			if(i>=candi[j])
			{
				value=change[i-candi[j]][j];
				combination[i].push_back(candi[j]);
				cout<<i<<" th  "<<j<<" th "<<candi[j]<<" "<<endl;
			}
			change[i][j] = value+change[i][j-1];
		}
	}
	return combination;
}


int main()
{
	vector<int> coins={2,3,6,7};
	int coin_size=coins.size();
	int total;
	cout<<"enter the total\n";
	cin>>total;
	int i,j,k;
	vector<vector<int> > combine(total+1,vector<int> (coin_size+1));
	combine = combinationSum(coins,total);
	cout<<"total = "<<combine.size();
	cout<<"out of sum\n";
	for(i=0;i<combine.size();i++)
	{
		for(j=0;j<combine[total].size();j++)
		{
			cout<<combine[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

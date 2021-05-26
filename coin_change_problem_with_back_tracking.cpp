class Solution {
public:
    void functioncall(vector<int>& coins,int target,vector<vector<int>>& combine,int index,vector<int>& temp,int coin_size)
{
	if(target==0)
	{
		combine.push_back(temp);
		return;
	}
	while((index<coin_size) && (target-coins[index]>=0))
	{
		temp.push_back(coins[index]);
		functioncall(coins, target-coins[index], combine, index, temp, coin_size);
		index++;
		temp.pop_back();
	}
	return;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> combine;
        vector<int> temp;
        int coin_size=candidates.size();
        int index=0;
        functioncall(candidates, target, combine, index, temp, coin_size);
	    return combine;
    }
};

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i,j,k,tsize;
        tsize=nums.size();
        map<int,int> m;
        
        for(i=0;i<tsize;i++)
        {
            m[nums[i]]=i;
        }
        vector<int> indices;
        for(i=0;i<tsize;i++)
        {
            int res = target-nums[i];
            if((m.find(res)!=m.end()) && (m[res]!=i))
            {
                //i<<" "<<m[res]<<endl;
                indices.push_back(i);
                indices.push_back(m[res]);
                break;
            }
        }
        return indices;
    }
};

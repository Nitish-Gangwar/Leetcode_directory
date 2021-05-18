class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i,j,k,ans=0;
        map<char,int> m;
        i=0;
        j=0;
        int maxi=0;
        int len=s.length();
        while(j<len)
        {
            if(m.find(s[j])!=m.end())
            {
                i=m[s[j]]+1;
                //cout<<i<<endl;
                map<char,int> m1;
                m=m1;
                int tem=i;
                while(tem<j)
                {
                    m[s[tem]]=tem;
                    tem++;
                }
                if(ans>=maxi)
                {
                    maxi=ans;
                    ans=0;
                    
                }
                
            }
            ans=max(j-i+1,ans);
            m[s[j]]=j;
            j++;
        }
        if(ans>=maxi)
        {
            maxi=ans;
        }
        return maxi;
    }
};

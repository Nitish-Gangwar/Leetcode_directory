class Solution {
public:
    string longestPalindrome(string s) 
    {
        int left=0,right=0,lth=s.length();
        int i,j,k,maxlth=0;
        i=0;
        
        string st;
        while(i<lth)
        {
            // for the odd length case
            left=right=i;
            while(left>=0 && right<lth && s[left]==s[right])
            {
                int templth=right-left+1;
                if(templth > maxlth)
                {
                    st=s.substr(left,templth);
                    maxlth=templth;
                }
                left-=1;
                right+=1; 
            }
            // for the even length case
            left=i;
            right=i+1;
            while(left>=0 && right<lth && s[left]==s[right])
            {
                int templth=right-left+1;
                if(templth>maxlth)
                {
                    st=s.substr(left,templth);
                    maxlth=templth;
                }
                left-=1;
                right+=1; 
            }
            i++;
          }
        return st;
    }
};

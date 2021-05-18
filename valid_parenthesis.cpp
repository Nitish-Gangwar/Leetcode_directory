class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        int i=0,j,k;
        while(s[i]!='\0')
        {
            if(st.empty())
            {
                if((s[i]==')' || s[i]=='}' || s[i]==']'))
                {
                    return false;
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else if((s[i]=='(' || s[i]=='{' || s[i]=='['))
            {
                st.push(s[i]);
            }
            else
            {
                char at_top=st.top();
                st.pop();
                if(at_top=='(' && s[i]!=')')
                    return false;
                else if(at_top=='{' && s[i]!='}')
                    return false;
                else if(at_top=='[' && s[i]!=']')
                    return false;  
            }
            i++;
        }
        if(!st.empty())
            return false;
        else
            return true;
    }
};

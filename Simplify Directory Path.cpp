string Solution::simplifyPath(string A) {
    
string s1 = "..";
string s9 = ".";
stack<string> st;

for(int i = 0;i<A.length();i++)
{
    if(A[i] == '/')
    continue;
    else
    {
        string s5 = "";
        while(A[i] != '/' && i < A.length())
        {
            s5 += (A[i]);
            i++;
        }
        if(s5 == s1)
        {
            if(!st.empty())
            st.pop();
        }
        else if(s5 == s9)
        {
            continue;
        }
        else
        {
            st.push(s5);
        }
    }
}
if(st.empty())
{
    string p  ="/";
    return p;
}
string ans = "";
while(!st.empty())
{
    string temp = st.top();
    reverse(temp.begin(),temp.end());
    ans += temp;
    ans += '/';
    st.pop();
}
reverse(ans.begin(),ans.end());
return ans;
    
    
}

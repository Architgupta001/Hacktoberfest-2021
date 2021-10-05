#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    cin>>s;
    int l=s.size();

    stack <char> st;
    for(int i=0;i<l;i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else 
        {
            if((s[i]=='(') || (s[i]=='{') || (s[i]=='[') )
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i]==')' && st.top()=='(')
                {
                    st.pop();
                }
                else if(s[i]=='}' && st.top()=='{')
                {
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='[')
                {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
        }
            
    }

    if(st.empty())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(5);
    st.push(25);
    st.push(58);
    st.push(55);
    cout<<st.top()<<endl;
    st.pop();    
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty();
    
    return 0;
}

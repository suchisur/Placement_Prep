#include<bits/stdc++.h>
using namespace std;

void delMid(stack<int>& st,int s)
{
    if(st.size()==(s/2)+1)
    {
        st.pop();
        return;
    }

    int temp=st.top();
    st.pop();
    delMid(st,s);
    st.push(temp);

}
int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    delMid(st,st.size());
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
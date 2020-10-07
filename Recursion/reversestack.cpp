#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>& s,int ele)
{
    if(s.empty()) 
    {
        s.push(ele);
        return;
    }

    int temp=s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);
}
void rev(stack<int>& s)
{
    if(s.size()==1) return;
    int temp=s.top();
    s.pop();
    rev(s);
    insert(s,temp);
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    rev(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
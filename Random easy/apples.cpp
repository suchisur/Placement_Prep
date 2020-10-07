#include<bits/stdc++.h>
using namespace std;
int findMax(int index,vector<char> a,int prev,int count)
{
    if(index>=a.size()) return 0;
    if(a[index]=='A')
    {
        if(prev==true) return 1+findMax(index+1,a,true,count);
        else if(prev==false) return findMax(index+1,a,true,count);

    }
    if(a[index]=='O')
    {
        if(count!=0)
        {
            return max(1+findMax(index+1,a,true,count-1),findMax(index+1,a,false,count));
        }
        else 
        {
            return findMax(index+1,a,false,count);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<char> a;

    for(int i=0;i<n;i++)
    {
        char s;
        cin>>s;
        a.push_back(s);
    }
    cout<<findMax(0,a,true,2);
}
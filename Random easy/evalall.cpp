#include<bits/stdc++.h>
using namespace std;
int val(int a,int b, char op)
{
    if(op=='+') return a+b;
    if(op=='-') return a-b;
    if(op=='*') return a*b;
    if(op=='/') return a/b;

}
vector<int> ex(string s,int low,int high)
{
    vector<int> res;
    if(low==high) { res.push_back(s[low]-'0'); return res;}
    if(low==(high-2))
    {
        int sum=val(s[low]-'0',s[low+2]-'0',s[low+1]);
        res.push_back(sum);
        return res;

    }
    for(int i=low+1;i<=high;i+=2)
    {
        vector<int> l=ex(s,low,i-1);
        vector<int> r=ex(s,i+1,high);
        for(int j=0;j<l.size();j++)
        {
            for(int k=0;k<r.size();k++)
            {
                int v=val(l[j],r[k],s[i]);
                res.push_back(v);
            }
        }
    }
    return res;

}
int main()
{
    string s="1+3*2+8-9";
    int len=s.length();
    vector<int> res=ex(s,0,len-1);
    for(auto x:res) cout<<x<<" ";
}
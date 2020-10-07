#include<bits/stdc++.h>
using namespace std;
void para(int o,int c,vector<string>& res,string op)
{
    if(o==0&&c==0)
    {
        res.push_back(op);
        return;
    }

    if(c<o) return;

    
    
    if(o>0)
    {
        string op1=op;
        op1.push_back('(');
        para(o-1,c,res,op1);
    }
    if(c>0)
    {
        string op2=op;
        op2.push_back(')');
        para(o,c-1,res,op2);
    }
    
   
}
int main()
{
    int n;
    cin>>n;
    vector<string> res;
    string op="";
    para(n,n,res,op);
    for(auto x:res) cout<<(x)<<" ";
}
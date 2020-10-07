#include<bits/stdc++.h>
using namespace std;
void perm(string op,string ip)
{
    if(ip.size()==0)
    {
        cout<<op<<" "<<endl;
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back('_');
    op2.push_back(ip[0]);
    op1.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    perm(op2,ip);
    perm(op1,ip);
}
int main()
{
    string ip="ABC";
    string op="A";
    ip.erase(ip.begin()+0);

    perm(op,ip);
    
}
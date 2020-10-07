#include<bits/stdc++.h>
using namespace std;

void perm(string op,string ip)
{
    if(ip.size()==0)
    {
        cout<<op<<" ";
        return;
    }
    string op1=op;//include
    string op2=op;//exclude
   
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

     perm(op1,ip);
     perm(op2,ip);
}
int main()
{
 string ip="abc";
 string op="";
 perm(op,ip);
}
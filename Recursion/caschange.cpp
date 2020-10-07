#include<bits/stdc++.h>
using namespace std;
void caseChange(string op,string ip)
{
    if(ip.size()==0)
    {
        cout<<op<<" ";
        return;
    }
    
    if(isalpha(ip[0]))
    {
        string op1=op;
        string op2=op;
         op1.push_back(tolower(ip[0]));
         op2.push_back(toupper(ip[0]));
         ip.erase(ip.begin()+0);
        caseChange(op1,ip);         
        caseChange(op2,ip);
        
        
    }
    else
    {
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        caseChange(op,ip);
    }
    

    
    
   
   
}
int main()
{
    string ip="a1352Bc";
    string op="";
    caseChange(op,ip);
}
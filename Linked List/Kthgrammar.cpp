#include<bits/stdc++.h>
using namespace std;
string Pat(char s)
{
    if(s=='0') return "01";
    if(s=='1') return "10";
}
string findPat(int N,string s)
{
    if(N==1) return s;
    string res="";
    for(int i=0;i<s.size();i++)
    {
        res=res+Pat(s[i]);
    }
    return findPat(N-1,res);
}
int main()
{
     string s=findPat(30,"0");
    int  K=434991989;
    if(s.size()<K) return -1;
    return s[K-1]-'0';
}
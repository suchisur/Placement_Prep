#include<bits/stdc++.h>
using namespace std;
void removeDup(string& s)
{
    int j=0;
    int n=s.length();
    if(n<2);
    for(int i=1;i<n;i++)
    {
        if(s[j]!=s[i])
        {
            j++;
            s[j]=s[i];
        }
    }
    j++;
    s[j]='\0';
}
int main()
{
    string s;
    getline(cin,s);
    removeDup(s);
    cout<<s;
}
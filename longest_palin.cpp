#include<bits/stdc++.h>
using namespace std;
void longPal(string str)
{
    int n=str.length();
    bool s[n][n];
    memset(s,true,sizeof(s));

    int maxLength=1;

    for(int i=0;i<n;i++)
    {
        s[i][i]=true;
    }

    int start=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]==str[i+1])
        {
            s[i][i+1]=true;
            start=i;
            maxLength=2;
        }
    }

    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            int j=k+i-1;

            if(str[i]==str[j]&&s[i+1][j-1]==true)
            {
                s[i][j]=true;
                if(k>maxLength)
                {
                     maxLength=k;


                start=i;
                }
               
            }
        }
    }

    cout<<str.substr(start,maxLength);
}

int main()
{
    string s;
    getline(cin,s);
    longPal(s);

    
}
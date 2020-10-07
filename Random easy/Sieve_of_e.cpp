#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter a number";
    cin>>n;
    if(n<=1) return 0;
    bool isPrime[n+1];
    
    fill(isPrime,isPrime+n+1,true);
    for(int i=2;i*i<n;i++)
    {
        
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                isPrime[j]=false;
            }
            
        }
    }
    for(int i=2;i<n;i++) if(isPrime[i]) cout<<i<<" ";
}
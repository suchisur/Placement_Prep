#include<bits/stdc++.h>
using namespace std;
const int num=256;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    

    int hp[num]={0};
    int hs[num]={0};

    int l1=s1.length();
    int l2=s2.length();

    for(int i=0;i<l1;i++)
    {
        hp[s2[i]]++;
    }
    int count=0,lmin=INT_MAX,start=0,ans=-1;
    for(int j=0;j<l1;j++)
    {
        hs[s1[j]]++;
        if(hp[s1[j]]!=0&&hp[s1[j]]>=hs[s1[j]])
        {
            count++;
        }
        if(count==l2)
        {
            while(hp[s1[start]]==0||hp[s1[start]]<hs[s1[start]])
            {
                if(hp[s1[start]]<hs[s1[start]])
                {
                    hs[s1[start]]--;
                }
                start++;
            }
            int l=j-start+1;
            if(lmin>l)
            {
                lmin=l;
                ans=start;
            }
        }
    }
    if(ans==-1) cout<<" Nope"<<endl;
    else cout<<s1.substr(start,lmin);

}
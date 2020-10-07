#include <bits/stdc++.h>
using namespace std;

bool isVowel(char v)
{
    if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u') return true;

    return false;
}

int main()
{
    string s;
    cin>>s;
    int max0=0,max1=0;
    int index=0;
    int n=s.length();
    int A[2][n+1];
    memset(A,0,sizeof(A[0][0])*2*(n+1));
    bool mval=false;
    for(int i=0;i<=n;i++)
    {
        if(isalpha(s[i]))
        {
            if(isVowel(s[i]))
            {
                A[0][i+1]=A[0][i]+1;
                if(A[0][i+1]>max0)
                {
                    max0=A[0][i+1];
                    
                }
                if((mval==true)&&(max0>=5)&&(A[0][i+1]>=5))
                {
                    if((i-index)>=5||(A[0][index]+A[1][index+5])==7) mval=false;
                }

            }
            else
            {
                A[1][i+1]=A[1][i]+1;
                if(A[1][i+1]>max1)
                {
                    max1=A[0][i+1];
                    
                }
                if((mval==true)&&(max1>=3)&&(A[1][i+1]>=3))
                {
                    if((i-index)>=3||(A[1][index]+A[0][index+3])==7) mval=false;
                }
            }
            if(mval==false&&(max0>=5||max1>=3))
            {
                cout<<"BAD"<<endl;
                exit(0);
            }
            
        }
        else if(s[i]=='?')
        {
            A[0][i+1]=A[0][i]+1;
            if(A[0][i+1]>max0) max0=A[0][i+1];

            A[1][i+1]=A[1][i]+1;
            if(A[1][i+1]>max1) max1=A[1][i+1];

            index=1;
            mval=true;
        }
    }

    if(mval&&(max0>=5||max1>=3))
    {
        cout<<"MIXED"<<endl;
    }
    else cout<<"GOOD"<<endl;


    return 0;


}
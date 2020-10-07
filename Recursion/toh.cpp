#include<bits/stdc++.h>
using namespace std;
void toh(int n,int s,int h,int d)
{
    if(n==1)
    {
        cout<<"Moving "<<n<<" from "<<s<<" to "<<d<<endl;  
        return;
    }

     toh(n-1,s,d,h);
     cout<<"Moving "<<n<<" from "<<s<<" to "<<d<<endl;
     toh(n-1,h,s,d);
     return;    
}
int main()
{
    int n;
    cin>>n;
    int s,d,h;
    s=1;
    d=3;
    h=2;
    toh(n,s,h,d);

}
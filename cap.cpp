#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int> a)
{
    int n=a.size();
    int m=INT_MIN;
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(m<a[i])
        {
            m=a[i];
            index=i;

        }
    }
    return index;
}
int main()
{
    vector<int> a={1,1,500};
    int k;
    cin>>k;
    int n=a.size();
    while(k--)
    {
        int i=findMax(a);
        cout<<i<<" ";
        cout<<ceil((double)a[i]/2);
        a[i]=ceil((double)a[i]/2);
       
        cout<<endl;

    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;

}
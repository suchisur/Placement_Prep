#include<bits/stdc++.h>
using namespace std;
int getMedian(int arr1[],int arr2[],int n,int m)
{
    int i=0;
    int j=0;
    int m1=-1,m2=-1;
    int count;
    if((n+m)%2==1)
    {
        for(count=0;count<=(n+m)/2;count++)
        {
            if(i!=n&&j!=m)
            {
                m1=(arr1[i]>arr2[j])?arr2[j++]:arr1[i++];
            }
            else if(i<n)
            {
                m1=arr1[i++];
            }
            else
            {
                
                m1=arr2[j++];
                
            }
            
        }
        return m1;
    }
    else 
    {
        for(count =0;count<=(n+m)/2;count++)
        {
            m2=m1;
            if(i!=n&&j!=m)
            {
                m1=(arr1[i]>arr2[j])?arr2[j++]:arr1[i++];
            }
            else if(i<n)
            {
                m1=arr1[i++];
            }
            else
            {
                
                m1=arr2[j++];
                
            }

        }
        return (m1+m2)/2;
    }

}
int main()
{
    int arr1[]={1,2,7,3,-1,99};
    int arr2[]={8,4,5,6,23,32,-9};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    cout<<getMedian(arr1,arr2,n,m);

    


}
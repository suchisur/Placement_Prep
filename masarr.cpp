#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[],int i,int n)
{
    if(i>=n) return 0;
    return max(arr[i]+maxSum(arr,i+2,n),maxSum(arr,i+1,n));
}
int main()
{
 int arr[]={1,-1,2,3,4};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<maxSum(arr,0,n);
}
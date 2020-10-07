#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>& arr,int temp)
{
    if(arr.size()==0||arr[arr.size()-1]<=temp)
    {
        arr.push_back(temp);
        return;
    }
    int val=arr[arr.size()-1];
    arr.pop_back();
    insert(arr,temp);
    arr.push_back(val);

}
void sort(vector<int>& arr)
{
    int n=arr.size();
    if(n==1) return;//base condition
    int temp=arr[n-1]; //last element
    arr.pop_back();
    sort(arr);
    insert(arr,temp);//inserting last element


}

int main()
{
 vector<int> arr={1,2,10,7,5};
 int n=arr.size();
 sort(arr);
for(auto x:arr)
{
    cout<<(x)<<" ";
}

}
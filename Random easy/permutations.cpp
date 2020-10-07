#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int m=pow(2,n);
        vector<vector<int>> res;
        res.reserve(m*n);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i&1<<j)!=0)
                {
                    res[i].push_back(num[j]);
                }
            }
            
        }

        return res;
        
        
        
        
    }
    int main()
    {
        vector<int> nums;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            nums.push_back(a);
        }
        
        subsets(nums);

    }
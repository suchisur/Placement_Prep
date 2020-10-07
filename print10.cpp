#include<bits/stdc++.h>
using namespace std;
class A
{
    static int a;
    public:    
    A()
    {
        //cout<<a++<<endl;
       
    }

};
int A::a=1;

int main()
{
    A s[100];
    int i=0;
begin:
    if(i<10)
    {
        i=i+1;
        cout<<i<<" ";
        goto begin;
    }
}
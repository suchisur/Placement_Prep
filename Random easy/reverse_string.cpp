#include<bits/stdc++.h>

using namespace std;


void reverseaf(char *start,char*end)
{
    char temp;
    while(start<end){
    temp=*start;
    *start++=*end;
    *end--=temp;

    }
   
     
}
void revv(char*s)
{
    char *start;
    char *end;
    start=s;
    end=s;
    while(*end)
    {
        end++;
        if(*end==' ')
        {
            reverseaf(start,end-1);
            start=end+1;
        }
        else if(*end=='\0')
        {
            reverseaf(start,end-1);
        }
    }
    reverseaf(s,end-1);

}
int main()
{
    char s[1000];
    cin.getline(s,1000);
    int n=strlen(s);
   
    revv(s);
        
        
    cout<<s;
}
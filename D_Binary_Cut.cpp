#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    string s;
    cin>>s;
    int n=s.size();
    int cnt=1;
    int teg=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            continue;
        }
        else
        {
            cnt++;
        }
        if(s[i-1]=='0'&& s[i]=='1')
        {
            teg=1;
        }
    }
    cout<<cnt-teg<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}
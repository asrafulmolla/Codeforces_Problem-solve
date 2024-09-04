#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    vector<int>a(4);
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    sort(a.begin(),a.end());
    for(int i=0;i<4-1;i++)
    {
        if(a[i]==a[i+1]) cnt++;
    }
    // for(int i=0;i<4;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    cout<<cnt; 
}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}
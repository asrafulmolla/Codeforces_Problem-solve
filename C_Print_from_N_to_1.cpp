//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        cout<<i;
        if(i!=1)
        {
            cout<<" ";
        }
    }
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
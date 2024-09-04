/*problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1+=a[i][j];
            }
            if(i==n-j-1)
            {
                sum2+=a[i][j];
            }
        }
    }
    int result=abs(sum1-sum2);
    cout<<result;
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
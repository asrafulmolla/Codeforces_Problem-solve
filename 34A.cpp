#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=0,s=n-1;
    int mn=abs(a[0]-a[n-1]);
    for(int i=0;i<n-1;i++)
    {
        int ab=abs(a[i]-a[i+1]);
        if(ab<mn)
        {
            f=i;
            s=i+1;
            mn=ab;
        }
    }
    cout<<f+1<<" "<<s+1;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%3==2)
        {
            cout<<1<<endl;
        }
        else if(sum%3==1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}
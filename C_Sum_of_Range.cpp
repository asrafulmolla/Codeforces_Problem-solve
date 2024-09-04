#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a,n;
    cin>>a>>n;
    ll sum=0,even=0,odd=0;
    if(a>n)
    {
        int temp=a;
        a=n;
        n=temp;
    }
    for(int i=a;i<=n;i++)
    {
        sum+=i;
        if(i%2==0)
        {
            even+=i;
        }
        else
        {
            odd+=i;
        }
    }
    cout<<sum<<endl<<even<<endl<<odd;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int a,b;
    cin>>a>>b;
    int sum =0;
    //sum += (a & 1) + (b & 1);
    sum=a^b;
    cout<<sum;
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
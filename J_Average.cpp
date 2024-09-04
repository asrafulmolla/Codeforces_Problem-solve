// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    double a[n];
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<fixed<<setprecision(7)<<sum/n;

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
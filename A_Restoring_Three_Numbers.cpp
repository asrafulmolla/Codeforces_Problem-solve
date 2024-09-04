#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    vector<int>ar(4);
    for(int i=0;i<4;i++) in ar[i];
    sort(ar.begin(),ar.end());
    int a=ar[3]-ar[0];
    int b=ar[2]-a;
    int c=ar[3]-(b+a);
    out c<<" "<<b<<" "<<a;
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
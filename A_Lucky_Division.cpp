#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int cnt=0;
    int a[]={4,7,44,47,77,74,444,447,474,477,744,747,774,777};
    int i=0;
    while(i<14)
    {
        if(n%a[i]==0) 
        {
            cnt=1;
            yes;
            break;
        }
        i++;
    }
    if(cnt==0) no;
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
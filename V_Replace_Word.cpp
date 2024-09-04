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
    string s;
    cin>>s;
    int index=s.find("EGYPT");
    while(s.find("EGYPT")!=-1)
    {
        s.replace(s.find("EGYPT"),5," ");
    }
    cout<<s;
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
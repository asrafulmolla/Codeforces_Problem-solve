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
    bool cnt=false;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='0' && s[i+1]=='1'&&s[i+2]=='0') || (s[i]=='1' && s[i+1]=='0'&&s[i+2]=='1'))
        {
            cnt=true;
            break;
        }
    }
    if(cnt) cout<<"Good\n";
    else cout<<"Bad\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}
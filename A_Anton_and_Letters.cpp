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
    getline(cin,s);
    int cnt=0;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(s[i+1]!=s[i])
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}
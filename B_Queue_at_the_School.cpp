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
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<s.size()-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    cout<<s;
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
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
    int cnt=0; //EGYPT
    int e=0,g=0,y=0,p=0,t=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='E' || s[i]=='e')
        {
            e++;
        }
        else if(s[i]=='G' || s[i]=='g')
        {
            g++;
        }
        else if(s[i]=='Y' || s[i]=='y')
        {
            y++;
        }
        else if(s[i]=='P' || s[i]=='p')
        {
            p++;
        }
        else if(s[i]=='T' || s[i]=='t')
        {
            t++;
        }
    }
    cout<<min({e,g,y,p,t});
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
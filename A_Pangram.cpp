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
    int n;
    in n;
    string s;
    in s;
    int cnt=0;
    for (char &c : s)
        c = tolower(c);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(s[i]>s[j])
            {
                int temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            continue;
        }
        else
        {
            cnt++;
        }
    }
    if (cnt==26) yes;
    else no;
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
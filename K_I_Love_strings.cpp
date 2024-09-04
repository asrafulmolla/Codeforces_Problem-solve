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
    string s1,s2,s3;
    cin>>s1>>s2;
    int len1=s1.size();
    int len2=s2.size();
    int mm=max(len1,len2);
    for(int i=0;i<mm;i++)
    {
        if(i<len1)
        {
            cout<<s1[i];
        }
        if(i<len2)
        {
            cout<<s2[i];
        }
    }
    cout<<endl;
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
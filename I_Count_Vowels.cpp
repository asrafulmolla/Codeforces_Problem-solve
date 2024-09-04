// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    string s;
    getline(cin,s);
    int cnt=0;
    for(int i=0;i<s[i]!='\0';i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
        {
            cnt++;
        }
    }
    cout<<cnt;
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
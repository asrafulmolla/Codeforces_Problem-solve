#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    string s1,s2;
    cin>>s1>>s2;
    for (char &c : s1)
        c = tolower(c);
    for (char &c : s2)
        c = tolower(c);
    cout<<s1.compare(s2);
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
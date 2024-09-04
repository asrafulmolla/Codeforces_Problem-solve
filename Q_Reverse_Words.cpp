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
    stringstream ss(s);
    string word;
    ss>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    while(ss>>word)
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
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
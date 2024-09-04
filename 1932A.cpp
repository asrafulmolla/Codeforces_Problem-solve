#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    int cnt=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='@')
        {
            cnt++;
        }
        else if(s[i]=='*' && s[i+1]=='*')
        {
            break;
        }
        else 
            continue;
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}
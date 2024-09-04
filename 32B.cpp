#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='-' && s[i+1]=='-')
        {
                s2 +='2';
                i++;
                continue;
        }
        if(s[i]=='-' && s[i+1]=='.')
            {
                s2 +='1';
                i++;
                continue;
            }
        
        if(s[i]=='.')
        {
            s2 +='0';
        }
        
    }
    cout<<s2<<endl;
}
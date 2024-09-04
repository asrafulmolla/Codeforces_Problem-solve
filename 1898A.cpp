#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cntb=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
        {
            cntb++;
        }
    }
    if(cntb==k) cout<<0<<endl;
    else 
    {
        if(cntb<k)
        {
            int count=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='A')
                {
                    count++;
                }
                if(count ==k-cntb)
                {
                    cout<<1<<endl<<i+1<<" "<<'B'<<endl;
                    break;
                }
            }
        }
        else
        {
            int count=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='B')
                {
                    count++;
                }
                if(count ==cntb-k)
                {
                    cout<<1<<endl<<i+1<<" "<<'A'<<endl;
                    break;
                }
        }
    }
    }
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
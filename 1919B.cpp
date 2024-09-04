#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p=0,m=0,n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]=='+')
            {
                p+=1;
            }
            else if(s[i]=='-')
            {
                m+=1;
            }
        }
        cout<<abs(p-m)<<endl;
    }
}
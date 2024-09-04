#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int b1=0,b2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && b1==0)
                b1=i+1;
            if(s[i]=='B' && b1!=0)
                b2=i+1;
        }
        cout<<abs(b1-b2)+1<<endl;
    }
}
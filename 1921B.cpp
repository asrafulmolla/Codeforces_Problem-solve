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
        string s1,s2;
        cin>>s1>>s2;
        int one=0,cnt=0,one2=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1')
            one++;
            if(s2[i]=='1')
            one2++;
            if(s2[i]!=s1[i] && s2[i]=='1')
            cnt++;
        }
        int result=cnt;
        if(one>one2)
        result+=(one-one2);
        cout<<result<<endl;

    }
}
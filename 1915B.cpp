#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        sort(s3.begin(),s3.end());
        //cout<<s1;
        if(s1[0]=='?')
        {
            if (s1[1]='B' && s1[2]=='C') cout<<"A"<<endl;
            else if (s1[1]=='A' && s1[2]=='B') cout<<"C"<<endl;
            else if(s1[1]=='A' && s1[2]=='C') cout<<"B"<<endl;
        }
        else if(s2[0]=='?')
        {
            if (s2[1]='B' && s2[2]=='C') cout<<"A"<<endl;
            else if (s2[1]=='A' && s2[2]=='B') cout<<"C"<<endl;
            else if(s2[1]=='A' && s2[2]=='C') cout<<"B"<<endl;
        }
        else if(s3[0]=='?')
        {
            if (s3[1]='B' && s3[2]=='C') cout<<"A"<<endl;
            else if (s3[1]=='A' && s3[2]=='B') cout<<"C"<<endl;
            else if(s3[1]=='A' && s3[2]=='C') cout<<"B"<<endl;
        }
        
    }
}
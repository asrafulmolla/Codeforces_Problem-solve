#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int a=1,b=0;
    
    for( int i=0; i<=s2.size(); i++)
    {
        if(s1[b]==s2[i])
        {
            a++;
            b++;
        }
    }
    cout<<a<<endl;
    return 0;
}
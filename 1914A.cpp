#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cnt=0;
        vector<ll>a(27);
        for(ll i=0;i<n;i++)
        {
            a[s[i]-'A']++;
            if(a[s[i]-'A']==(s[i]-'A'+1))

            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        


    }
}
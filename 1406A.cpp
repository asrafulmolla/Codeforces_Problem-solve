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
        int a[n];
        int ans=0;
        int m[101]={0};
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        int c=0;
        for(int i=0;i<101;i++)
        {
            if(m[i]!=0)
            {
                m[i]--;
            }
            else 
            {
                ans+=i;
                break;
            }
        }
        for(int i=0;i<101;i++)
        {
            if(m[i]!=0)
            {
                m[i]--;
            }
            else 
            {
                ans+=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
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
        int sum=0;
        for(int i=0;i*111<=n;i++)
        {
            if((n-111*i)%11==0)
            {
                sum=1;
                break;
            }
        }
        if(sum==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
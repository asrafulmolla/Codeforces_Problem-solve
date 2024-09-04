#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int sum=0,a;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sqrt(sum)==floor(sqrt(sum))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

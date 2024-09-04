#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll sum1=(k*(k+1))/2;
        ll sum2=(n*(n+1))/2;
        ll sum=sum2-((n-k)*(n-k+1))/2;
        if(x>=sum1 && x<=sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

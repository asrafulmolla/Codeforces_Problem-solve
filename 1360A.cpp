#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int m=max(2*a,b);
        int n=max(a,2*b);
        int result=min(m,n);
        cout<<pow(result,2)<<endl;
    }
}

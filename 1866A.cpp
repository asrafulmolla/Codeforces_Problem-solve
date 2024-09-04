#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],cnt=1e12;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt=min(cnt,abs(a[i]));
    }
    cout<<cnt;

}
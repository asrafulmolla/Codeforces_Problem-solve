#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    int n;
    int sum=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++)
    {
        sum+=a[i+1]-a[i];
    }
    cout<<sum<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}
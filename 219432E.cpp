#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n;
    cin>>n;
    int a[n];
    int max_=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    cout<<a[0];
}

int main()
{
    asraful();
}
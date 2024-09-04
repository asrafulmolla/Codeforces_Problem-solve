#include<bits/stdc++.h>
#define ll long long
using namespace std;

unsigned long long int  asraful(unsigned long long int n)
{
    unsigned long long int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}

int main()
{
    int n;
    cin>>n;
    unsigned long long int result=asraful(n);
    cout<<result;
}
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int a,b;
    cin>>a>>b;
    ull a_fac=1;
    for(int i=1;i<=a;i++)
    {
        a_fac*=i;
    }
    //cout<<a_fac<<endl;
    ull b_fac=1;
    for(int i=1;i<=b;i++)
    {
        b_fac*=i;
    }
    //cout<<b_fac<<endl;
    int c=(a-b);
    ull c_fac=1;
    for(int i=1;i<=c;i++)
    {
        c_fac*=i;
    }
    //cout<<c_fac<<endl;
    cout<<a_fac/(b_fac*c_fac);

}

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}
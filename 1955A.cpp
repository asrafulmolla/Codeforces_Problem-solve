#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,a,b;
    cin>>n>>a>>b;
    int ans=((n/2)*b+(n%2)*a);
    if (b < 2 * a) 
        {
            cout <<ans<<endl;
        } 
        else 
        {
            cout <<(n*a)<<endl;
        }
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
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
        cout<<x<<" "<<y<<endl;
    }
    else
    {
        cout<<y<<" "<<x<<endl;
    }
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}
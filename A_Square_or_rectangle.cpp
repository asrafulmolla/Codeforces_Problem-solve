#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int a,b;
    cin>>a>>b;
    if(a==b) cout<<"Square\n";
    else cout<<"Rectangle\n";
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
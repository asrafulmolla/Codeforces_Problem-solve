#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;

bool asraful()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    bool cnt1,cnt2;
    cnt1=cnt2=false;
    int temp=max(a,b);
    a=min(a,b);
    b=temp;
    for(int i=a;i<=b;i++)
    {
        if(c==i) cnt1=true;
        if(d==i) cnt2=true;
    }
    if(cnt1 && cnt2 ||(!cnt1 && !cnt2)) cout<<"NO\n";
    else cout<<"YES\n";
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
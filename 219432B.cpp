#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++) 
    {
        if(i%2==0) 
        {
            cnt++;
            cout<<i<<endl;
        }
    }
    if(cnt==0) cout<<-1<<endl;
}

int main()
{
    asraful();
}
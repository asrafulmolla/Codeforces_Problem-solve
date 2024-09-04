#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>x={a,b,c};
    sort(x.begin(),x.end());
    for(int i=0;i<=2;i++)
    {
        cout<<x[i]<<endl;
    }
    cout<<endl<<a<<endl<<b<<endl<<c;
    
}

int main()
{
    asraful();
}
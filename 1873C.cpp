#include<bits/stdc++.h>
using namespace std;

void asraful()
{
   long long ans=0;
   for(int i=0;i<10;i++)
   {
    for(int j=0;j<10;j++)
    {
        char ch;
        cin>>ch;
        if(ch=='X')
        {
            ans+=min({i-0,9-i,j,9-j})+1;
        }
    }
}
cout<<ans<<endl;
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
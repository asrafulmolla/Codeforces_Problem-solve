#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful()
{
    int  n,a,b;
    cin>>n>>a>>b;
    int x[n][n];
    --a;
    --b;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>x[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        swap(x[a][i],x[b][i]);
    }
    for(int i=0;i<n;i++)
    {
        swap(x[i][a],x[i][b]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    //cin>>t;
    while(t--)
    {
        asraful();
    }
}

/*

1 7  7 2
0 4  -5 3
3 2  1 -5
5 6 40 11

00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33

*/
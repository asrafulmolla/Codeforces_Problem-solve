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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int p = 0;
    int ac[2] = {a, b};
    int bc[2] = {c, d};
    for (int i = 0; i < 2;i++)
    {
        for (int j = 0; j < 2;j++)
        {
            int x = 0, y = 0;
            if(bc[j]<ac[i])
                x++;
            else if(bc[j]>ac[i])
                y++;
            if(ac[1-i]>bc[1-j])
                x++;
            else if(ac[1-i]<bc[1-j])
                y++;
            if(x>y)
                p++;
        }
    }
    cout << p << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
    {
        asraful();
    }
}
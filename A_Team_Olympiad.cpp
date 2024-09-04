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
    int n;
    in n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    vector<int>d(n);
    for(int i=0;i<n;i++) in a[i];
    int one=0,two=0,three=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            {
                b[one]=i;
                one++;
            }
        if(a[i]==2) 
            {
                c[two]=i;
                two++;
            }
        if(a[i]==3)
            {
                d[three]=i;
                three++;
            }
    }
    cout<<min({one,two,three})<<endl;
    for(int i=0;i<min({one,two,three});i++){
        out b[i]+1<<" "<<c[i]+1<<" "<<d[i]+1<<endl;
    }
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
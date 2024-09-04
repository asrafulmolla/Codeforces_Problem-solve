#include<iostream>
using namespace std;


main()
{
    int t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a>b^c<d&&a>c^b<d) cout<<"YES\n";
        else cout<<"NO\n";

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t,a,b,i,n,m,j,x,y,c,z,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
             int a[n+1];
             c=0;
             for(i=1;i<=n;i++){
                cin>>a[i];
             }
                for(i=3;i<=n;i++)
                {
                if(a[i-1]>a[i-2] && a[i-1]>a[i])
                {
                    c=1;
                cout<<"YES"<<endl<<i-2<<" "<<i-1<<" "<<i<<endl;
                break;
             }
                }
    if(c==0)
        cout<<"NO"<<endl;

        }
}
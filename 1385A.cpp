
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t,a,b,i,n,m,j,x,y,c,z,sum;
    string s;
    cin>>t;
    while(t--)
    {
            int ar[4];
        cin>>ar[0]>>ar[1]>>ar[2];

            sort(ar+0,ar+3);

             if(ar[1]!=ar[2])
    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl<<1<<" "<<ar[0]<<" "<<ar[2]<<endl;

    }
}


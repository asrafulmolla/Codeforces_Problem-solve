#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,cnt1=0,cnt2=0;
        cin>>n;
        while(!(n%2))
        {
            n/=2;
            cnt1++;
        }
        while(!(n%3))
        {
            n/=3;
            cnt2++;
        }
        int cnt3=(cnt2-cnt1)+cnt2;
        if(n!=1 || cnt1>cnt2)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<cnt3<<endl;
        }


    }
}

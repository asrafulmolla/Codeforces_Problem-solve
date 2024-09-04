#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    int n,even=0,odd=0,neg=0,pos=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0) even++;
        if(a[i]%2!=0) odd++;
        if(a[i]>0) pos++;
        if(a[i]<0) neg++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
}

int main()
{
    asraful();
}
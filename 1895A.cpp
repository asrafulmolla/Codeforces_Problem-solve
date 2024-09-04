#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(y<x)
        { 
            cout<<x<<endl;
            continue;}
        int diffrent =y-x;
        int sum=x;
        if(diffrent<=z) sum=sum+diffrent;
        else sum=sum+z+(diffrent-z)*2;
        cout<<sum<<endl;
    }
}
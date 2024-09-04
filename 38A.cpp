#include<iostream>
#include<cstdlib>
using namespace std;
using s=short;
int main(){
    s n, a, b;
    cin>>n;
    s d[n-1];
    int x=0;
    for(s i=0;i<n-1;i++) cin>>d[i];
    cin>>a>>b;
    for(s i=a;i<b;i++)x+=d[i-1];
    cout<<x;
}
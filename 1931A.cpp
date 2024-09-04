#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=(n-2);
        if(m<=26)
        {
            int m=(n-2)+96;
            char c=m;
            cout<<"a"<<"a"<<c<<endl;
        }
        else if (n>=29 && n<53)
        {
            int d=(n-26)+95;
            char e=d;
            cout<<"a"<<e<<"z"<<endl;
        }
        else if (n>=53 && n<=78)
        {
            int f=(n-26-26)+96;
            char g=f;
            cout<<g<<"z"<<"z"<<endl;
        }
        
    }
}
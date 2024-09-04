#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    char s;
    cin>>s;
    if(65 <= s && 96>=s)
    {
        char c=s+32;
        cout<<c;
    }
    else
    {
        char c=s-32;
        cout<<c;
    }
}

int main()
{
    asraful();
}
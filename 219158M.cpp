#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    char s;
    cin>>s;
    if(48 <= s && 57>=s)
    {
        cout<<"IS DIGIT";
    }
    else if(65 <= s && 96>=s)
    {
        cout<<"ALPHA\nIS CAPITAL";
    }
    else 
    {
        cout<<"ALPHA\nIS SMALL";
    }
}

int main()
{
    asraful();
}
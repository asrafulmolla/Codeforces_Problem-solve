#include<bits/stdc++.h>
#define ll long long
using namespace std;

void asraful()
{
    char ch;
    cin>>ch;
    if(ch>=97 && ch<=121) 
    {
        ch+=1;
        cout<<ch;
    }
    else cout<<'a';
}

int main()
{
    asraful();
}
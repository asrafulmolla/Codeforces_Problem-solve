#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
        for(int i=1;true;++i)
        {
        if((a*i)%10==0 || (a*i)%10==b)
        {
            cout<<i;
            break;
        }
    }
}

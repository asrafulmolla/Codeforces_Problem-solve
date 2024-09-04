#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,x3,x4,y1,y2,y3,y4,sum=0;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        if(x1==x2) sum=y1-y2;
        else if(x1==x3) sum=y1-y3;
        else sum=y1-y4;
        int result=sum*sum;
        cout<<result<<endl;

    }
}

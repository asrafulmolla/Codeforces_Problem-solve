#include<bits/stdc++.h>
using namespace std;

void asraful()
{
    double a,b;
    cin>>a>>b;
    if(a>0)
    {
        if(b>0) cout<<"Q1";
        else if(b==0) cout<<"Eixo X";
        else cout<<"Q4";
    }
    else if(a<0)
    {
        if(b>0) cout<<"Q2";
        else if(b==0) cout<<"Eixo X";
        else cout<<"Q3";
    }
    else if(b>0)
    {
        if(a>0) cout<<"Q1";
        else if(a==0) cout<<"Eixo Y";
        else cout<<"Q2";
    }
    else if(b<0)
    {
        if(a>0) cout<<"Q4";
        else if(a==0) cout<<"Eixo Y";
        else cout<<"Q3";
    }
    else if(a==0 && b==0) cout<<"Origem";
    
}

int main()
{
    asraful();
}
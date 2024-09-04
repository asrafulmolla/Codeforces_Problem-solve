#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=5,tag=0;
    while(n--)
    {
        string t;
        cin>>t;
        if(s[0]==t[0])
        {
            tag=1;
            break;
        }
        else if(s[1]==t[1])
            {
                tag=1;
                break;
            }
    }
    if(tag==1){
        cout<<"YES"<<endl;}
    else{
        cout<<"NO"<<endl;}

}

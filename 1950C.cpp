#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]=='0')
        {
            if(s[1]=='1' || s[1]=='2' || s[1]=='3' || s[1]=='4' || s[1]=='5' || s[1]=='6' || s[1]=='7'|| s[1]=='8'|| s[1]=='9')
            {
                cout<<s<<" AM"<<endl;
                //break;
            }
        }
        if(s[0]=='1')
        {
            if(s[1]=='0' || s[1]=='1')
            {
                cout<<s<<" AM"<<endl;
                //break;
            }
            else if(s[1]=='2')
            {
                cout<<s<<" PM\n";
            }
        }
        if(s[0]=='0' && s[1]=='0')
        {
            if(s[3]=='0' && s[4]=='0')
            {
                cout<<"12:00 AM"<<endl;
                //break;
            }
            else
            {
                cout<<"12:"<<s[3]<<s[4]<<" AM"<<endl;
            }
                
        }
        if(s[0]=='1')
        {
            if(s[1]=='3')
            {
                cout<<"01:"<<s[3]<<s[4]<<" PM"<<endl;
               // break;
            }
            if(s[1]=='4')
            {
                cout<<"02:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
            if(s[1]=='5')
            {
                cout<<"03:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
            if(s[1]=='6')
            {
                cout<<"04:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
            if(s[1]=='7')
            {
                cout<<"05:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
            if(s[1]=='8')
            {
                cout<<"06:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
            if(s[1]=='9')
            {
                cout<<"07:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
        }
        if(s[0]=='2')
        {
            if(s[1]=='0')
            {
                cout<<"08:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
            if(s[1]=='1')
            {
                cout<<"09:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
            if(s[1]=='2')
            {
                cout<<"10:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
            if(s[1]=='3')
            {
                cout<<"11:"<<s[3]<<s[4]<<" PM"<<endl;
                //break;
            }
        }
    }
}

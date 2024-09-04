#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int test=0;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='M'||s[i]=='m')
            {
                test=1;
            }
            else if (test==1&&(s[i]=='E'||s[i]=='e'))
                test=2;

            else if(test=2&&(s[i]=='O'||s[i]=='o'))
                test=3;
            else if (test=3&&(s[i]=='W'||s[i]=='w'))
                test=4;
            else
                test = 0;

        }
        if(test==4)
            {
            cout<<"YES"<<endl;
            break;
            }
        else if(test==0)
            {
                cout<<"NO"<<endl;
                break;
            }

    }
}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];

        int c = 0;
        int a = 0;
        for(int i=0;i<n;i++){
            if(v[i]==0)
            c++;
            else{
                a = max(a,c);
                c = 0;
            }
        }
        a = max(a,c);
        cout<<a<<endl;
    }
    return 0;
}

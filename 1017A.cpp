#include<iostream>
#include<algorithm>
#include<math.h>
//#include<bits/stdc++.h>

//#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_sback
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;
int main()
{
    int n,i=0;
    int a,b,c,d;
    int s[1001];
    cin>>n;
    for(i=0; i<n; i++){
        int sum=0;
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        s[i]=sum;
    }

    int Smith=s[0];
    sort(s,s+n,greater<int>());
    for(int i=0; i<n; i++){
        if(Smith==s[i]){
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}

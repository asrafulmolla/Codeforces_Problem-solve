#include<iostream>
#include<math.h>
#include<bits/stdc++.h>

#define ll              long long
#define ull             unsigned long long
#define pb              push_sback
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
uns;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         string s;
         cin>>s;
         int A=0,B=0,C=0,D=0,E=0;
         for(int i=0;i<n;i++)
         {
             if(s[i]== 'T')
             {
                A++;
             }
             else if(s[i]== 'i')
             {
                 B++;
             }
             else if(s[i]== 'm')
             {
                 C++;
             }
             else if(s[i]== 'u')
             {
                 D++;
             }
             else if(s[i]== 'r')
             {
                 E++;
             }
         }
         if(A==1 &&B==1 &&C==1 &&D==1 &&E==1)
         {
             cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }

     }
 }

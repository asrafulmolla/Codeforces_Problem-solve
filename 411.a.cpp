#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() 
{   char n="!",j= "?",k= ".",l= ",",m= "_";
    string password;
    cin>>password;
    if (password.length() <5) 
    {
        cout<<"Too weak"<<endl;
        return 0;
    }
    bool upper_case=false;
    bool lower_case=false;
    bool digit=false;
    
    for (char c : password) 
    {
        if (isupper(c)) 
        {
            upper_case = true;
        } 
        else if (islower(c)) 
        {
            lower_case = true;
        } 
        else if (isdigit(c)) 
        {
            digit = true;
        }
    }
    if (upper_case && lower_case && digit && (n || j || k || l || m)) 
    {
        cout<<"Correct"<<endl;
    } else {
        cout<<"Too weak"<<endl;
    }
 
    return 0;
}

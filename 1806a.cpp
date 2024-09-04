#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
        {
            string a,b;
            cin >>a>>b;
            string c="XXXS";
            string d= "XS";
            string e="XXXL";
            string f="XL";
            string g="M";
            string h="XXL";
            string i="XXXXXS";
            if(a==c && b==d)
            {
                cout<<"<"<<endl;
            }
            else if(a==e && b==f)
            {
                cout<<">"<<endl;
            }
            else if(a==f && b==g)
            {
                cout<<">"<<endl;
            }
            else if(a==h && b==h)
            {
                cout<<"="<<endl;
            }
            else if(a==i && b==g)
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<">"<<endl;
            }


        }

    return 0;
}

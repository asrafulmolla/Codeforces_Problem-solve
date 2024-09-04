#include <iostream>
using namespace std;
int main()
 {
    int n,maximum = 1,currentLength = 1,prev, current,i;
    cin >> n;
    cin >> prev;

    for (i = 1; i < n; i++)
        {
          cin >> current;
        if (current > prev)
         {
            currentLength++;
         }
         else
            {
                currentLength = 1;
           }
        if (currentLength > maximum)
            {
                maximum = currentLength;
            }
            prev = current;
        }

    cout << maximum <<endl;

}

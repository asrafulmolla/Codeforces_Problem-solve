#include<iostream>
#include <string>
//#include<math.h>
//#include<bits/stdc++.h>

//#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_sback
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;

int main() {
    string word;
    cin >> word;

    int lower_count = 0;
    int upper_count = 0;
    for (char c : word) {
        if (islower(c)) {
            lower_count++;
        } else {
            upper_count++;
        }
    }

    if (lower_count >= upper_count) {
        for (char &c : word) {
            c = tolower(c);
        }
    } else {
        for (char &c : word) {
            c = toupper(c);
        }
    }

    cout << word << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string cards;
        cin >> cards;

        int swaps = 0;
        for (int i = 0; i < 2; i++) {
            if (cards[i] > cards[i + 1]) {
                swap(cards[i], cards[i + 1]);
                swaps++;
            }
        }

        if (swaps <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

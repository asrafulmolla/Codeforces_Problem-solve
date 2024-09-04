#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;

        // Initialize a vector to store the dice values
        vector<int> dice(n);

        // Calculate the sum of all dice values except one with the maximum value
        int sum_except_max = s - r;

        // Fill the vector with values from 1 to 6
        for (int i = 0; i < n - 1; i++) {
            dice[i] = 1;
        }

        // Distribute the remaining sum_except_max on the dice
        dice[n - 1] = 6 - (sum_except_max - 1);

        // Output the dice values
        for (int i = 0; i < n; i++) {
            cout << dice[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

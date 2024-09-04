#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s;
        cin >> s;

        int current_digit = 9;
        int place_value = 1;
        int result = 0;

        while (s > 0) {
            if (current_digit <= s) {
                result += current_digit * place_value;
                s -= current_digit;
                place_value *= 10;
                current_digit--;
            } else {
                current_digit--;
            }
        }

        cout << result << endl;
    }

    return 0;
}

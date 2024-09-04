#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    // Efficient calculation using logarithms
    double a_power_b = b * log2(a);
    double c_power_d = d * log2(c);

    if (a_power_b > c_power_d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    std::cin >> n;

    std::vector<int> strengths(n);

    // Input strengths of participants
    for (int i = 0; i < n; ++i) {
        std::cin >> strengths[i];
    }
    while (n--)
    {
    
    // Find the maximum strength among all participants
    int max_strength = -1;
    for (int i = 0; i < n; ++i) {
        if (strengths[i] > max_strength) {
            max_strength = strengths[i];
        }
    }

    // Calculate and output the differences
    for (int i = 0; i < n; ++i) {
        int difference = max_strength - strengths[i];
        std::cout << difference << " ";
    }
    }
    return 0;
}
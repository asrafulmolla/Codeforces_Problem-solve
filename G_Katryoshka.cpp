#include <iostream>
#include <algorithm>

using namespace std;

long long solve(long long n, long long m, long long k)
{
    long long max_katryoshkas = 0;

    // Try to make the maximum number of type 1 Katryoshkas
    // (two eyes and one body) first
    long long type1 = min(n / 2, k);

    // Remaining resources after making type1 Katryoshkas
    n -= type1 * 2;
    k -= type1;
    max_katryoshkas = type1;

    // Try to make the maximum number of type 2 Katryoshkas
    // (two eyes, one mouth, and one body) next
    long long type2 = min({n / 2, m, k});

    // Remaining resources after making type2 Katryoshkas
    n -= type2 * 2;
    m -= type2;
    k -= type2;
    max_katryoshkas += type2;

    // Try to make the maximum number of type 3 Katryoshkas
    // (one eye, one mouth, and one body) last
    long long type3 = min({n, m, k});
    max_katryoshkas += type3;

    return max_katryoshkas;
}

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    cout << solve(n, m, k) << endl;
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

const int MOD = 1e9 + 7;

// Converts decimal k to binary string
string decimaltobinary(int k) {
    string binary = "";
    while (k > 0) {
        binary += (k % 2) + '0';
        k /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

// Converts binary string to decimal in base n
int binarytodecimal(string binary, int n, int mod) {
    long long result = 0, power = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            result = (result + power) % mod;
        }
        power = (power * 1LL * n) % mod;
    }
    return result;
}

void solve() {
    int n, k;
    cin >> n >> k;
    string binary = decimaltobinary(k);
    int ans = binarytodecimal(binary, n, MOD);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

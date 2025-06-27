#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans;
    int left = 0;
    int right = n - 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans.push_back(arr[left]);
            left++;
        } else {
            ans.push_back(arr[right]);
            right--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

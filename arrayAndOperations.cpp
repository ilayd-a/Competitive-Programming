//https://codeforces.com/contest/1618/problem/D
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            // cout << arr[j] << endl;
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        int j = 0;
        int ans = 0;
        for (int j = 0; j < k; j++) {
            ans += arr[j + k] / arr[j];
        }
        for (int j = 2 * k; j < n; j++) ans += arr[j];
        cout << ans << endl;

    }
}

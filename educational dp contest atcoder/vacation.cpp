#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for(int i=0;i<n;i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    int dp[n][3];
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    for(int i=1; i < n; i++){
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + b[i];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + c[i];
    }
    int maxi = max(dp[n-1][0], dp[n-1][1]);
    maxi = max(dp[n-1][2], maxi);
    cout << maxi;
}

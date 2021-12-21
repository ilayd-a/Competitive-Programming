//https://atcoder.jp/contests/dp/tasks/dp_d
#include <iostream>
#include <cstring>
using namespace std;
#define int long long

int32_t main() {
    int N,W;
    cin >> N >> W;
    int w[N], v[N];
    for(int i=0; i < N; i++) cin >> w[i] >> v[i];
    int dp[W+1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < N; i++)
        for (int j = W; j >= w[i]; j--) dp[j] = max(dp[j], v[i] + dp[j - w[i]]);;
    cout << dp[W];
}

//https://atcoder.jp/contests/dp/tasks/dp_e
#include <iostream>
using namespace std;
#define int long long
const int maxn =1e5 + 1;
int dp[maxn];
int32_t main() {
    int n,W;
    cin >> n >> W;
    int v[n],w[n];
    for(int i=0;i<n;i++){
        cin >> w[i] >> v[i];
    }
    for(int i=0;i<maxn;i++) dp[i] =1e18;
    dp[0] = 0;
    for(int i=0;i<n;i++){
        for(int j=maxn-1;j>=0;j--){
            if(dp[j] + w[i] <=W) dp[j+v[i]] =min(dp[j+v[i]], dp[j] + w[i]);
        }
    }
    for(int i=maxn-1;i>0;i--)
        if(dp[i]!=1e18){
            cout << i;
            break;
        }
}

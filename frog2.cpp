//https://atcoder.jp/contests/dp/tasks/dp_b
#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int h[n],dp[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
        dp[i] = 1e9 + 7;
    }
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=k;j++){
            int a=h[j+i]-h[i];
            if(a<0) a*=-1;
            if(i+j<n) dp[i+j] = min(dp[i+j], dp[i]+a);
        }
    }
    cout << dp[n-1];
}

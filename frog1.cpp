//https://atcoder.jp/contests/dp/tasks/dp_a
#include <iostream>
using namespace std;
int dp[100005];

int main(){
    int n;
    cin >> n;
    int h[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
        dp[i]=1e9+7;
    }
    dp[0]=0;
    for(int i=0;i<n;i++){
        int a = h[i+1] - h[i];
        if(a<0) a*=-1;
        int b = h[i+2] - h[i];
        if(b<0) b*=-1;
        dp[i+1] = min(dp[i+1], dp[i] + a);
        dp[i+2] = min(dp[i+2], dp[i] + b);
    }
    cout << dp[n-1];
}
//https://www.spoj.com/problems/ELIS/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n],dp[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    dp[0]=1;
    for(int i=1;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] and dp[j]>=dp[i]){
                dp[i] = dp[j] + 1;
            }
        }
    }
    int mx=0;
    for(int i=0;i<n;i++){
        mx = max(mx,dp[i]);
    }
    cout << mx << endl;
}

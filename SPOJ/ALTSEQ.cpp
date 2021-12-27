//https://www.spoj.com/problems/ALTSEQ/
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long arr[n],dp[n],s[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]<0) s[i]=0;
        else s[i]=1;
    }
    dp[0]=1;
    for(int i=1;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(abs(arr[i])>abs(arr[j]) && (s[i]^s[j])==1 && dp[j]>=dp[i]){
                dp[i] = dp[j] + 1;
            }
        }
    }
    int m=0;
    for(int i=0;i<n;i++){
        if(dp[i]>m) m = dp[i];
    }
    cout << m << endl;
}

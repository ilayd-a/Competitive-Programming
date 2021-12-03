//https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1#
#include <iostream>
using namespace std;

int main() {
   int n,ans=0;
   cin >> n;
   int arr[n];
   for(int i=0;i<n;i++) cin >> arr[i];
   int dp[n];
   dp[0]=1;
   for(int i=1; i<n; i++){
       dp[i]=1;
       for(int j=0; j<i; j++){
           if(arr[i] > arr[j] && dp[j]+1 >dp[i]){
               dp[i]=dp[j] + 1;
           }
       }
   }
   for(int i=0;i<n;i++) ans = max(ans,dp[i]);
   cout << ans;
}

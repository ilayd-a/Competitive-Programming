//https://codeforces.com/problemset/problem/455/A
#include <iostream>
using namespace std;

int arr[100005];
long long dp[100005], puanlar[100005];
long long f(int ind){
    if(ind >=100001) return 0;
    if(dp[ind]==-1){
        long long t1 = puanlar[ind] + f(ind +2);
        long long t2 = f(ind + 1);
        dp[ind] = max(t1,t2);
    }
    return dp[ind];
}
int main() {
  int n;
  cin >> n;
  for(int i=1;i<=n;i++){
      cin >> arr[i];
      puanlar[arr[i]]+=arr[i];
  }
  for(int i=0;i<100005;i++) dp[i]=-1;
  cout << f(1);
}

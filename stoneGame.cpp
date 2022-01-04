//https://codeforces.com/problemset/problem/1538/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N=105;
int dp[N],arr[N],n;
int main() {
    int t;
    cin >> t;
    while(t--) {
      cin >> n;
      vector <int> v(n);
      for(int i=0;i<n;i++) cin >> v[i];
      int maxPos = max_element(v.begin(), v.end()) - v.begin();
      int minPos = min_element(v.begin(), v.end()) - v.begin();
      cout << min({
          max(maxPos,minPos) + 1,
          (n-1) - min(maxPos, minPos) + 1,
          (n-1) - maxPos + minPos + 2,
          (n-1) - minPos + maxPos + 2
      }) << endl;
    }
}

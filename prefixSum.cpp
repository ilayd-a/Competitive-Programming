//prefix sum algorithm
#include <iostream>
using namespace std;
int main() {
   int n;
   cin >> n;
   int arr[n], pre[n];
   for(int i=1; i<=n; i++)
    cin >> arr[i];
   for(int i=1; i<=n; i++)
       pre[i] = pre[i-1] + arr[i];
   while(1){
       int l, r;
       cin >> l >> r;
       cout << pre[r] - pre[l-1];
   }
    return 0;
}

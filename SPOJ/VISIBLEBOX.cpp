#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
queue<int>q;
int res=1;
int main() {
    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j=0; j<n;j++) cin >> arr[j];
        sort(arr, arr+n);
        while(!q.empty()) q.pop();
        q.push(arr[0]);
        for(int j=1; j<n; j++){
            int now=q.front();
            if(arr[j]>=2*now) q.pop();
            q.push(arr[j]);
        }
        cout << "Case " << res++ << ": " << q.size() << endl;
    }
}

//https://codeforces.com/problemset/problem/1539/B
#include <iostream>
using namespace std;
int main() {
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    int pre[n];
    pre[0]=s[0] - 'a' + 1;
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + s[i] - 'a' + 1;
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        int total;
        total = pre[r-1] - pre[l-1] + s[l-1] - 'a' +1;
        cout << total << endl;
    }
}

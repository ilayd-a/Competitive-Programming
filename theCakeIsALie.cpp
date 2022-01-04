//https://codeforces.com/problemset/problem/1519/B
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        if(k==n*m-1) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

//https://codeforces.com/problemset/problem/1598/A
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,a=0;
        cin >> n;
        string s[2];
        cin >> s[0] >> s[1];
        for(int i=0;i<n;i++){
            if(s[0][i]=='0' || s[1][i]=='0') a++;
        }
        if(a==n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

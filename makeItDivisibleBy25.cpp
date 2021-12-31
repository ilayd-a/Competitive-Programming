//https://codeforces.com/contest/1593/problem/B
#include <iostream>
using namespace std;
int find(string req, string n){
    int cnt = 0;
    int i = n.length()-1;
    while(i>=0 && n[i]!=req[1]){
        cnt++;
        i--;
    }
    i--;
    while(i>=0 && n[i]!=req[0]){
        cnt++;
        i--;
    }
    return i<0 ? INT_MAX:cnt;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        int ans = INT_MAX;
        string suff[]={"00", "25","50","75"};
        for(int i=0;i<4;i++){
            ans = min(ans, find(suff[i],n));
        }
        cout << ans << endl;
    }
}

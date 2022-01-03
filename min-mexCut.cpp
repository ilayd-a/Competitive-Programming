//https://codeforces.com/problemset/problem/1566/B
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int zeroes = count(s.begin(), s.end(),'0');
        if(zeroes==0){
            cout << 0 << endl;
            continue;
        }
        int start = s.find('0');
        int end = s.rfind('0');
        if(end-start+1==zeroes) cout << 1 << endl;
        else cout << 2 << endl;
    }
}

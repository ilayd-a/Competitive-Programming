//https://codeforces.com/problemset/problem/110/A
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7') cnt++;
    }
    if(cnt==7 || cnt==4) cout << "YES" << endl;
    else cout << "NO" << endl;
}

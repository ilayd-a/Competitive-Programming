//https://codeforces.com/problemset/problem/96/A
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main() {
    string a;
    cin >> a;
    int n = a.size();
    int cnt=1;
    for(int i=1; i<n; i++){
        if(a[i]==a[i-1]) cnt++;
        else cnt=1;
        if(cnt == 7) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

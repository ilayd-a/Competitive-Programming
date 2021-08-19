//https://codeforces.com/contest/133/problem/A
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string a;
    cin >> a;
    for(int i=0; i<a.size(); i++){
        if(a[i]=='H') {
            cout << "YES";
            return 0;
        }
        else if(a[i]=='Q'){
            cout << "YES";
            return 0;
        }
        else if(a[i]=='9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

//https://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        int m = a.size();
        if(m <= 10) cout << a << endl;
        else{
            cout << a[0] << m - 2 << a[m-1] << endl;
        }
    }
}


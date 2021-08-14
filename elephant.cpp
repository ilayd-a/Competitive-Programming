//https://codeforces.com/contest/617/problem/A
#include <iostream>
using namespace std;
int main() {
    int x,n=0;
    cin >> x;
    while(x>5){
        x-=5;
        n++;
    }
    n++;
    cout << n;
}

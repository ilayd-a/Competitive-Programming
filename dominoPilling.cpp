//https://codeforces.com/problemset/problem/50/A
#include <iostream>
using namespace std;
int main() {
    int m, n, sum1, sum2;
    cin >> m >> n;
    sum1 = (m / 2) * n;
    if(m % 2 == 1) sum1 += (n / 2);
    sum2 = (n / 2) * m;
    if(n % 2 == 1) sum2 += (m / 2);
    if(sum1 > sum2) cout << sum1;
    else cout << sum2;
}

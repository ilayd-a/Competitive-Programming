//https://codeforces.com/problemset/problem/1/A
#include <iostream>
using namespace std;
int main() {
   long long int n, m, a, ken1=0, ken2=0;
   cin >> n >> m >> a;
   ken1 += ( n / a );
   if(n % a != 0) ken1++;
   ken2 += ( m /  a );
   if(m % a != 0) ken2 ++;
   cout << (ken1 * ken2) << endl;
}

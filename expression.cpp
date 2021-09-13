https://codeforces.com/contest/479/problem/A
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int m=a+b*c;
    int d=a*(b+c);
    int g=a*b*c;
    int y=(a+b)*c;
    int z=a+b+c;
    int max=m;
    if(max<d) max=d;
    if(max<g) max=g;
    if(max<y) max=y;
    if(max<z) max=z;
    cout << max;
}

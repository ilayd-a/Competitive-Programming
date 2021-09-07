//https://codeforces.com/contest/1567/problem/B
//prefix xor
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int prexor[300005];
    prexor[0]=0;
    for(int i=1;i<300005;i++){
        prexor[i]=(prexor[i-1] xor i);
    }
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b;
        cin >> a >> b;
        if(prexor[a-1]==b) cout << a << endl;
        else if((prexor[a-1] xor a)==b) cout << a+2 << endl;
        else cout << a+1 << endl;
    }
}

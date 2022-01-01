//https://codeforces.com/contest/500/problem/A
#include <iostream>
#include <vector>
using namespace std;
const int N=30005;
vector<int>v;
int t,c;
int mark[N];
int main() {
    int n;
    cin >> n >> t;
    for(int i=1;i<=n-1;i++){
        int a;
        cin >> a;
        mark[i]=a;
    }
    int x=1;
    while(x<t){
        x+=mark[x];
    }
    if(x==t) cout << "YES";
    else cout << "NO";
}

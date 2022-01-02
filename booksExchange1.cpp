//https://codeforces.com/contest/1249/problem/B1
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int N=2e5;
vector<int>v(N);
int mark[N];
void dfs(int ind,int d){
    mark[ind]=1;
    if(mark[v[ind]]==0){
        dfs(v[ind],d+1);
    }
    else {
        cout << d << " ";
        return;
    }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++) cin >> v[i];
        for(int i=1;i<=n;i++){
            dfs(i,1);
            memset(mark,0,sizeof(mark));
        }
        cout << endl;
    }
}

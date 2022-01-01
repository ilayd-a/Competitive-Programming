//https://codeforces.com/problemset/problem/1020/B
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int N = 1005;
vector<int>v[N];
int mark[N];
void dfs(int ind){
    mark[ind]+=1;
    //cout << "mark " << ind << " = " << mark[ind] << endl;
    if(mark[ind]==2){
        cout << ind << " ";
        return;
    }
    for(int i=0;i<v[ind].size();i++){
     //   cout << " dfs " << ind << " " << i << "-->";
        dfs(v[ind][i]);
    }
}
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int p;
        cin >> p;
        v[i].push_back(p);
    }
    for(int i=1;i<=n;i++){
        dfs(i);
        memset(mark,0,sizeof(mark));
    }
}

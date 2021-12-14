#include <iostream>
#include <vector>
#define N 100005
using namespace std;
int n, m, arr[N],mark[N];
vector <int> yollar[N];

void dfs(int ind){
    mark[ind] = 1;
    cout << ind << endl;
    for(int i=0;i<yollar[ind].size();i++){
        if(mark[yollar[ind][i]]!=1)
            dfs(yollar[ind][i]);
    }
}
int main() {
    cin >> n;
    cin >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        yollar[a].push_back(b);
        yollar[b].push_back(a);
    }
    dfs(1);
}

//https://codeforces.com/problemset/problem/1057/A
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
const int N=2e5+5;
vector<int>v[N];
int parents[N];

void dfs(int ind, int p){
    parents[ind]=p;
    for(int i=0;i<v[ind].size();i++){
        if(v[ind][i]!=p){
            dfs(v[ind][i],ind);
        }
    }
}
int main() {
   ios_base::sync_with_stdio(0); cin.tie(0);
   int n;
   cin >> n;
   for(int i=2;i<=n;i++){
       int a;
       cin >>a;
       v[i].push_back(a);
       v[a].push_back(i);
   }
   dfs(1,-1);
   stack<int>s;
   while(n!=-1){
       s.push(n);
       n=parents[n];
   }
   while(!s.empty()){
       cout << s.top() << " ";
       s.pop();
   }
}

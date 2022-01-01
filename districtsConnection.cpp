//https://codeforces.com/problemset/problem/1433/D
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
#define int long long
const int N=5005;

vector <int> v[N];
int mark[N],arr[N];

int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
           cin>>arr[i];
        }
        bool f=0;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[0]) f = 1;
        }
        if(!f){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        queue<int>q;
        q.push(0);
        memset(mark,0, sizeof(mark));
        mark[0]=1;
        while(!q.empty()){
            int x = q.front();
           // cout << "x= " << x << endl;
            q.pop();
            for(int i=0;i<n;i++){
               // cout << "fora girdim" << i << endl;
                if(!mark[i]){
                    if(arr[i]!=arr[x]){
                        cout << x+1 << " " << i+1 << endl;
                        mark[i] = 1;
                        q.push(i);
                    }
                }
            }
        }
    }
}

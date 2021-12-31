//https://codeforces.com/problemset/problem/1549/B
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n,cnt=0;
        cin >> n;
        string greg, enemy;
        cin >> enemy >> greg;
        for(int i=0;i<n;i++){
            if(greg[i]=='1'){
                if(enemy[i]=='0'){
                    cnt++;
                    enemy[i]='2';
                }
                else{
                    if(enemy[i-1]=='1'){
                        cnt++;
                        enemy[i-1] = '2';
                    }
                    else if(enemy[i+1]=='1'){
                        cnt++;
                        enemy[i+1] = '2';
                    }
                }
            }
        }
        cout << cnt << endl;
    }
}

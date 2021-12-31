//https://codeforces.com/contest/910/problem/A
#include <iostream>
using namespace std;

int main() {
    int n,d;
    cin >> n >> d;
    string s;
    cin >> s;
    int pos=0;
    int ans=0;
    while(pos!=n-1){
        bool f=0;
        for(int i=pos+d;i>pos;i--){
            if(s[i]=='1'){
                pos=i;
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<-1;
            return 0;
        }
        ans++;
    }
    cout << ans;
}

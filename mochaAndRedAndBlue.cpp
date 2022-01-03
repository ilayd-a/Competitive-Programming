//https://codeforces.com/problemset/problem/1559/B
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int lp=0;
        int rp;
        for( rp = 0; rp < n; rp++){
            if(s[rp]!='?'){
                if(lp<rp) {
                    char targ = s[rp];
                    for (int i = rp - 1; i >= lp; i--) {
                        targ = (targ == 'B' ? 'R' : 'B');
                        s[i] = targ;
                    }
                }
                lp = rp + 1;
            }
        }
        if(lp < n){
            char targ;
            if(lp==0){
                targ='B';
            }
            else targ = s[lp-1];
            for(int i=lp;i<n;i++){
                targ =  (targ == 'B' ? 'R' : 'B');
                s[i] = targ;
            }
        }
        cout << s << endl;
    }

}

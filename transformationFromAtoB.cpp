//https://codeforces.com/contest/727/problem/A
#include <iostream>
#include <stack>
using namespace std;
#define int long long
int32_t main() {
    int a,b;
    cin >> a >> b;
    stack<int>s;
    s.push(b);
    while(b>=a){
        if(b==a){
            cout << "YES" << endl;
            cout << s.size() << endl;
            while(!s.empty()){
                cout << s.top() << " ";
                s.pop();
            }
            return 0;
        }
        if(b%2==0){
            b/=2;
            s.push(b);
        }
        else if(b%10==1){
            b = (b-1)/10;
            s.push(b);
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "NO";
}

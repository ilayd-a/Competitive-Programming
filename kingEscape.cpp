//https://codeforces.com/problemset/problem/1033/A
#include <iostream>
using namespace std;
int main() {
    int n,bx,by,ax,ay,cx,cy;
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    bool ans=true;
    if(cx<ax && bx>ax) ans=false;
    if(cx>ax && bx<ax) ans=false;
    if(cy>ay && by<ay) ans= false;
    if(cy<ay && by>ay) ans=false;
    if(ans) cout << "YES";
    else cout << "NO";

}

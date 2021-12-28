//https://www.spoj.com/problems/BRDGHRD/
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
using namespace std;
int const N=1e5 +1;
int seq[N];
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++) {
        int n;
        cin >> n;
        pair <int,int>p[n];
        memset(seq,0,sizeof(seq));
        for(int j=0;j<n;j++) cin >> p[j].first;
        for(int j=0;j<n;j++) cin >> p[j].second;
        sort(p,p+n);
        int l=0,ind;
        seq[0] = p[0].second;
        for(int j=0;j<n;j++){
            ind = upper_bound(seq,seq+l,p[j].second) - seq;
            seq[ind] = p[j].second;
            if(ind==l) l++;
        }
        cout << l << endl;
    }
}

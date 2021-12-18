//https://codeforces.com/contest/1618/problem/C
#include <iostream>
#include <vector>

#include <numeric>
using namespace std;

int main() {
    int t;
    cin>> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        long long arr[n],val1=0,val2=0;
        for(int j=0;j<n;j++) cin >> arr[j];
        for(int j=1;j<n;j+=2){
            val1 = gcd(val1,arr[j]);
        }
        for(int j=0;j<n;j+=2){
            val2 = gcd(val2, arr[j]);
        }
        bool psblty1=1, psblty2=1;
        for(int j=0;j<n;j+=2){
            if(arr[j]%val1==0) psblty1=0;
        }
        for(int j=1;j<n;j+=2){
            if(arr[j]%val2==0) psblty2=0;
        }
        if(!psblty2 && !psblty1) cout << 0 << endl;
        else if(psblty2) cout << val2 << endl;
        else cout << val1 << endl;
    }

}

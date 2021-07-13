//https://codeforces.com/problemset/problem/158/A
#include <iostream>
using namespace std;
int main(){
    int n,k,sum = 0;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i < n; i++) cin >> arr[i];
    for(int i=0; i<k ;i++){
        if(arr[i]==0){
            cout << sum << endl;
            return 0;
        }
        sum++;
    }

    for(int j = k; arr[j] == arr[k-1] && j < n; j++) sum ++;
    cout << sum << endl;
}


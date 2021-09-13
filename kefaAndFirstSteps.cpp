//https://codeforces.com/contest/580/problem/A
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    vector<int>cnt;
    cnt.push_back(0);
    int j=0;
    cin >> arr[0];
    for(int i=1;i<n;i++){
        cin >> arr[i];
        if(arr[i-1]<arr[i] || arr[i-1]==arr[i]) cnt[j]++;
        else{
            j++;
            cnt.push_back(0);
        }
    }
    int max=0;
    for(int i=0;i<cnt.size();i++){
        if(max<cnt[i]) max=cnt[i];
    }
    cout << max+1;
}

//https://codeforces.com/contest/617/problem/B
#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long int n,sum=1;
    cin >> n;
    int arr[n];
    vector<int>bir;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==1) bir.push_back(i);
    }
    int m = bir.size();
    if(m==1) cout << 1;
    else if(m==0) cout << 0;
    else{
        for(int i=m-1; i>0 ;i--){
            sum*=bir[i]-bir[i-1];
        }
        cout << sum;
    }
}

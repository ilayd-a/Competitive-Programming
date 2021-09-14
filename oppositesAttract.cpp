//https://codeforces.com/contest/131/problem/B
#include <iostream>
using namespace std;
long long int brr[22];
int main() {
    long long int n,cnt=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>0 || arr[i]==0){
            brr[arr[i]+11]++;
        }
        else{
            brr[-arr[i]]++;
        }
    }
    for(int i=1;i<11;i++){
        cnt+=brr[i]*brr[i+11];
    }
    cnt+=((brr[11]-1)*(brr[11])/2);
    cout << cnt;
}

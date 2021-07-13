#include <iostream>
#include <string>
using namespace std;
int binarySearch(int n, int k, int arr[]){
    int l = 0, r = n-1;
    int mid = l + ( r - l ) / 2;
    while(l<=r){
        mid = l + ( r - l ) / 2;
        if(arr[mid] == n) return 1;
        else if(arr[mid] < n) l = mid + 1;
        else r = mid - 1;
        }
    return -1;
}
int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    cout << binarySearch(n, k, arr) << endl;

}
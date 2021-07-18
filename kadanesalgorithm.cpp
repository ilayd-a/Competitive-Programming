// kadane's algorithm
#include <iostream>
using namespace std;
int main(){
    int n, max=0, sum=0;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        if(sum > max) max = sum;
        if(sum < 0) sum = 0;
    }
    cout << max;
}

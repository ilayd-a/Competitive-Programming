//https://www.spoj.com/problems/CODERE3/
#include <iostream>
using namespace std;
int main() {
   int t;
   cin >> t;
   for(int i=0;i<t;i++){
       int n;
       cin >> n;
       int arr[n],lis[n],lds[n];
       for(int j=0;j<n;j++) cin >> arr[j];
       lis[0]=1;
       lds[n-1]=1;
       int ind=0;
       for(int j=1;j<n;j++){
           lis[j]=1;
           for(int k=0;k<j;k++){
               if(arr[k]<arr[j] && lis[k]>=lis[j]){
                   lis[j] = lis[k] + 1;
               }
           }
       }
       for(int j=n-2; j>=0;j--){
           lds[j]=1;
           for(int  k=n-1;k>j;k--){
               if(arr[j]>arr[k] && lds[j] < lds[k] + 1){
                   lds[j] = lds[k] + 1;
               }
           }
       }
       int mx = lis[0] + lds[0] - 1;
       for(int j=1;j<n;j++){
           if(lis[j] + lds[j] - 1 > mx){
               mx = lis[j] + lds[j] -1;
           }
       }
       cout << mx<< endl;
   }
}

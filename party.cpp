//https://codeforces.com/problemset/problem/115/A
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int N=100005;
vector<int>v[N];
int visited[N];
int cnt;
int mx=INT_MIN;
int x;

int main(){
    int n,b=-1;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        int z=1;
        int j=i;
        while(arr[j]!=-1){
            z++;
            j=arr[j];
            j--;
        }
        if(z>x) x=z;
    }
    cout << x;
}

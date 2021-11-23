//https://www.spoj.com/problems/COINS/
#include <iostream>
using namespace std;
int dp[100000];

int max(int a, int b,int c){
    if(a>b){
        if(a>c) return a;
        else return c;
    }
    else{
        if(b>c) return b;
        else return c;
    }
}

int coins(int n){
    if(n<2) return 0;
    if(dp[n]==-1){
        dp[n] = max(n,n/2 + n/3 + n/4,coins(n/2) );
    }
    return dp[n];
}

int main() {
    for(int j=0; j<=10;j++){
        int n;
        cin >> n;
        for(int i=0;i<=n;i++) dp[i]=-1;
        cout << coins(n);
    }
}

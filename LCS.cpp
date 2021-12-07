//https://atcoder.jp/contests/dp/tasks/dp_f
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
    string x;
    string y;
    cin >> x >> y;
    int a = x.size();
    int b = y.size();
    int dp[a+1][b+1];
    for (int i = 0; i <= a; i++)
        for (int j = 0; j <= b; j++) {
            if (i == 0 || j == 0) dp[i][j] = 0;
            else if (x[i-1] == y[j-1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    int ind = dp[a][b];
    char lcs[ind + 1];
    lcs[ind] = '\0';
    int i=a,j=b;
    while(i>0 && j>0){
        if(x[i-1] == y[j-1]){
            lcs[ind-1] = x[i-1];
            ind--;
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }
    cout << lcs;
}
//kmp algorithm
#include <iostream>
using namespace std;
const int maxn = (int) 1e5 +5;

int pi[maxn];
int main() {
    string s;
    cin >> s;
    int n = s.size();
    for(int i=1; i<n; i++){
        int k = pi[i-1];
        while(k!=0 && s[k] !=s[i]) k = pi[k-1];
        if(s[k] == s[i]) k++;
        pi[i] = k;
    }
}

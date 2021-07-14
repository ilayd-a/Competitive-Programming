//https://codeforces.com/contest/339/problem/A
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
     string s;
     cin >> s;
     int n = (int)s.size();
     vector < char > a;
    for(int i=0; i<n; i= i+2){
         a.push_back(s[i]);
    }

     sort(a.begin(), a.end());
     for(int i=0; i < (int)a.size(); i++){
         if(i==0){
             cout << a[i];
             continue;
         }
         cout << "+" << a[i];
     }
}

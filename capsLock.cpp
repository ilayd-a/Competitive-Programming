//https://codeforces.com/contest/131/problem/A
#include <iostream>
using namespace std;
int main() {
     string s;
     cin >> s;
     int cnt=0;
     for(int i=0;i<s.size();i++){
         if((int)s[i]<93) cnt++;
     }
     if(cnt==s.size()){
         for(int i=0;i<s.size();i++){
             s[i]+=32;
         }
     }
     else if(cnt==s.size()-1 && s[0]>93){
         s[0]-=32;
         for(int i=1;i<s.size();i++){
             s[i]+=32;
         }
     }
     cout << s;
}

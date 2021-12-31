//https://codeforces.com/contest/948/problem/A
#include <iostream>
using namespace std;
int main() {
    int r,c;
    cin >> r >> c;
    string s[500];
    for(int i=0;i<r;i++) cin >> s[i];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(s[i][j]=='S'){
                if(i==0){
                    if(j==0){
                        if(s[i][j+1]=='W' || s[i+1][j]=='W'){
                            cout << "No" << endl;
                            return 0;
                        }
                        else{
                            if(s[i][j+1]=='.') s[i][j+1]='D';
                            if(s[i+1][j]=='.') s[i+1][j]='D';
                            continue;
                        }
                    }
                    if(s[i][j-1]=='W' || s[i][j+1]=='W' || s[i+1][j]=='W'){
                        cout << "No" << endl;
                        return 0;
                    }
                    else{
                        if(s[i][j+1]=='.') s[i][j+1]='D';
                        if(s[i+1][j]=='.') s[i+1][j]='D';
                        if(s[i][j-1]=='.') s[i][j-1]='D';
                        continue;
                    }
                }
                if(j==0){
                    if(s[i][j+1]=='W' || s[i+1][j]=='W' || s[i-1][j]=='W'){
                        cout << "No" << endl;
                        return 0;
                    }
                    else{
                        if(s[i][j+1]=='.') s[i][j+1]='D';
                        if(s[i+1][j]=='.') s[i+1][j]='D';
                        if(s[i-1][j]=='.') s[i-1][j]='D';
                        continue;
                    }
                }
                if(s[i][j-1]=='W' || s[i][j+1]=='W' || s[i+1][j]=='W' || s[i-1][j]=='W'){
                    cout << "No" << endl;
                    return 0;
                }
                else{
                    if(s[i][j+1]=='.') s[i][j+1]='D';
                    if(s[i+1][j]=='.') s[i+1][j]='D';
                    if(s[i][j-1]=='.') s[i][j-1]='D';
                    if(s[i-1][j]=='.') s[i-1][j]='D';
                    continue;
                }
            }
        }
    }
    cout << "Yes" << endl;
    for(int i=0;i<r;i++){
        cout << s[i] << endl;
    }
}

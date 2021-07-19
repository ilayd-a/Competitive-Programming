//https://codeforces.com/problemset/problem/282/A
#include <iostream>
using namespace std;
int main() {
    int n, a=0;
    cin >> n;
    for(int i=0; i<n; i++){
        char arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        if(arr[0] == 'X'){
            if(arr[1] == '+') a++;
            else a--;
        }
        else if(arr[0] == '+') a++;
        else a--;
    }
    cout << a << endl;
}

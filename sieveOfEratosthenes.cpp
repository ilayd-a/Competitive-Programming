//sieve of eratosthenes algorithm
#include <iostream>
using namespace std;

int asal_mi(int x){
    if(x == 1) return 0;
    for(int i=2; i*i <= x; i++){
        if(x % i == 0) return 0;
    }
    return 1;
}
int main(){
    while(1){
        int a;
        cin >> a;
        cout << asal_mi(a) << endl;
    }
}
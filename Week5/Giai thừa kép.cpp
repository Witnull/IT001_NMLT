#include <bits/stdc++.h>
using namespace std;
int64_t DFactor(int n){
    int64_t fac = n;
    while(n-2 > 0 ){
        n -= 2 ;
        fac *= n;
    }
    return fac;
}

int main() {
   int n;
   cin >> n;
   cout <<  DFactor(n);

    return 0;
}
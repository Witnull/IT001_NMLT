#include <bits/stdc++.h>
using namespace std;
int64_t S(int64_t n){
    int64_t res = 0;
    for (int64_t x = 2; x <= n; x *= 2)
        res += n / x;
    
    return res;
}

int main(){
    int64_t l, r;
    cin >> l >> r;
    cout << S(r) - S(l - 1);
    return 0;
}
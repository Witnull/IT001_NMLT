#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, k , p, q, a,b;
    cin >> n >> k >> p >> q;
    if (k > n || p > (n+1)/2){ cout << -1; return 0;}
    a = (p-1)*2 + ( q-1);
    b = (a > (k-1))?a-k:a+k;
    if ((b/2)+1 > (n+1)/2 || b +1 > n ){ cout << -1; return 0;}
    cout << b/2 +1 <<' '<< b%2 +1;
    return 0;
}
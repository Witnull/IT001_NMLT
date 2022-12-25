#include <bits/stdc++.h>
using namespace std;

int main(){
    int64_t r, d, n;
    cin >> d >> r >> n;
    cout << (2*r+2*d)*n - (n-1)*2*d;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x,f, gcdmax, i;
    cin >> n;
    vector<int> a(n), gcdR(n,0), gcdL(n,0);
    for(auto &i:a) cin >> i;
    
    gcdL[0] = a[0];
    for(int i = 1; i < n; i++){
        gcdL[i] = __gcd(gcdL[i-1],a[i]);
    }
        
    gcdR[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--){
        gcdR[i] = __gcd(gcdR[i+1],a[i]);
    }
    
    for(int gcdmax = gcdR[1], i = 1; i < n-1; i ++)
        gcdmax = max(gcdmax,__gcd(gcdL[i-1],gcdR[i+1]));
    gcdmax = max(gcdmax,gcdL[n-2]);
    cout << gcdmax;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, x,f, i, log_;
    int gcdmax;
    cin >> n;
    vector<int> a(n), gcdR(n,0), gcdL(n,0);
    for(auto &x:a) cin >> x;
    
    gcdL[0] = a[0];
    for( i = 1; i < n; i++)
        gcdL[i] = __gcd(gcdL[i-1],a[i]);
    gcdR[n-1] = a[n-1];

    for( i = n-2; i >= 0; i--)
        gcdR[i] = __gcd(gcdR[i+1],a[i]);
    
    
    log_ = i = 0;
    for(gcdmax = gcdR[1], i = 1; i < n-1; i ++){
           if(gcdmax < __gcd(gcdL[i-1],gcdR[i+1]))
                log_ = i;
       gcdmax = max(gcdmax,__gcd(gcdL[i-1],gcdR[i+1]));
   //    cout<< gcdL[i-1]<<' '<< gcdR[i+1]<< '=' << gcdmax<< endl;
    }
    if( gcdmax < gcdL[n-2]){gcdmax = gcdL[n-2]; log_ = n -1;}
    cout << log_ + 1<< ' '<< gcdmax;
    
    return 0;
}
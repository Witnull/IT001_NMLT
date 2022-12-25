#include <bits/stdc++.h>
using namespace std;

int64_t fold(int64_t n , int64_t m , int64_t h, int64_t w){
    int fold = 0;
    while (h < n){h *=2; fold +=1;}
    while (w < m){w *=2; fold +=1;}
    return fold;
}

int main(){
    int64_t n, m, h, w;
    cin >> n>> m>> h>> w;

    cout << min(fold(n,m,h,w),fold(m,n,h,w));

    return 0;
}
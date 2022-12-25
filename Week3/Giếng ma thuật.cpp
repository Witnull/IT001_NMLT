#include <bits/stdc++.h>
using namespace std;

int main(){
    int64_t a, b, n, t;
    t = 0;
    cin >> a >> b >> n;
    for(int i = 0 ; i < n; i++){
        t += a*b;
        a++;b++;
    }
    cout << t;
    return 0;
}
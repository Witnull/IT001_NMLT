#include <bits/stdc++.h>

using namespace std;

int main(){
    int64_t n, sum;
    cin >> n;
    sum =0;
    for( int64_t i = 1; i <= sqrt(n); i++){
        int64_t a = n/i;
        if(n%i ==0){
            if (i==a)
                sum += i;
            else
                sum = sum + i + a;
        }
    }
    cout << sum  - n;

return 0;
}
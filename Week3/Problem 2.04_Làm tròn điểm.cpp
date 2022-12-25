#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, n;
    cin >> a >> n;
    a*= n;
    cout << setprecision(10) << round(a)/n;
    return 0;
}
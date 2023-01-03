// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
double pi(double n){
    if(n <=0) return 0;
    return pow(-1,n)/(2*n+1) + pi(n-1);
}
int main() {
    double n;
    cin >> n;
    cout <<setprecision(6) << 4+ 4*pi(n);
    return 0;
}
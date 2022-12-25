#include <bits/stdc++.h>
using namespace std;
int perm(int a, int b, int c, int d){
    int t= 0;
   
    while((double) a/b < (double) c/d){
        int x = __gcd(a,b);
        if(x != 1){
            a/= x;
            b/= x;
        }
        a++; 
        b++;
        t++;
       // cout << t <<' '<< a << b <<' '<< x <<endl;
        if ((double) a/b == (double) c/d) return t;
    }
    return 0;
}

int main() {
    int a, b , c ,d;
    cin >> a>> b>> c>> d;
    cout << perm(a,b,c,d);
    return 0;
}
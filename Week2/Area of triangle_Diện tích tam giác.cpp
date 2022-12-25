#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    float S, p;
    cin >> a >> b>> c;
    p = (a+b+c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f", S);
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, Fibn;
    cin >> n;
    Fibn = (1/sqrt(5)) *(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n));
    cout << Fibn;
}
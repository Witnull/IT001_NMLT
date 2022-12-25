#include <bits/stdc++.h>
using namespace std;

int main(){
    string x, y;
    int stopat = 0;
    cin >> x >> y;
    if(x == y){ cout << 0; return 0;}
    if(x.size() != y.size()) {
        cout << (x.size()>y.size()?x.size():y.size()); return 0;}
    for(int i = 0 ; i < x.size(); i++ ){
        if(x[i] != y[i]){ stopat = i; break;}
    }
    cout << x.size()-stopat;
    return 0;
}
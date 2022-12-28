#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float t, x;
    cin >> n >> n;
    t = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(i == j){
                t += x;
            }
        }
    }
    cout <<t;
    return 0;
}
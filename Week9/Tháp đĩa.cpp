#include<bits/stdc++.h>
using namespace std;
bool k[1000006];
int main() {
    int n; cin >> n;
    int m = n;
    while (n--) {
        int a; cin >> a; k[a] = true;
        while (m > 0 && k[m]) cout <<m-- << ' ';
        cout << '\n';
    }

    return 0;
}
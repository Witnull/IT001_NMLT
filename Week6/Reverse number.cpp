#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    string s = to_string(n);
    reverse(s.begin(),s.end());
    return stoi(s);
}
int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}

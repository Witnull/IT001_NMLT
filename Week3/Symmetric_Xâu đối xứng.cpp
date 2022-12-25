#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string revesedS = s;
    reverse(revesedS.begin(),revesedS.end());
    if(s == revesedS)
        cout <<"YES";
    else
        cout << "NO";
    return 0;
}
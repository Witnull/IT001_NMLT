#include <bits/stdc++.h>
using namespace std;
int n, diff = 0;
map<string, int> mp;
string s;

int main() {
cin >> n;
while (n--) {
cin >> s;
if (!mp[s]) diff++;
mp[s]++;
}
cout << diff << endl;
return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, a; 
    cin >> s;
    sort(s.begin(), s.end(), std::greater<int>());
    a += s;
    a += '\n';

    while(prev_permutation(s.begin(), s.end())){
        a += s;
        a += '\n';
    };
    cout << a;
}
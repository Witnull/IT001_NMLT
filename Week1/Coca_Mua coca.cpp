#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[0] == s[s.size()-1])
        cout << "Lose";
    else
        cout <<"Win";
    return 0;
}
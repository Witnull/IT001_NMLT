#include <bits/stdc++.h>
using namespace std;

int main(){
    int64_t num, x, age ;
    cin >> num;
    age = 0;
    while (num%10 == 0) {x++; num /=10;};
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '0') age++;
    cout << age;
    return 0;
}
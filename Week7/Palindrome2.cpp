// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string n){
    string k = n;
    reverse(n.begin(), n.end());
    return n == k;
}
    
int main() {
    string n;
    cin >> n;
    cout <<boolalpha<< isPalindrome(n);
    return 0;
}
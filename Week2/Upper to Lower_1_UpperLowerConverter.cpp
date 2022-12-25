#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    for( int i =0; i<S.size(); i++)
        S[i] =(isupper(S[i])?tolower(S[i]):toupper(S[i]));
    cout << S;
}
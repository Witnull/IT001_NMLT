#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
    cin >> s;

    int64_t sum =0;
    int p =0;
    for( int64_t i =0; i <=s.size()-1;i++){
        sum += s[i] -48;
    }

    int64_t ad = 3 - sum%3;
    for(p =0; (p<s.size()) && (s[p] + ad) > '9'; p++);
        if (p >=s.size())
            s[s.size()-1] -= ((sum%3)?sum%3:3);
        else{
            s[p] += ('9'-s[p]+sum%3)/3*3-sum%3;
        }

    cout << s;
return 0;
}
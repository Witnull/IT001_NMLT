#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, word;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  
    istringstream ss(s);
    
    while(ss >> word){
        word[0] = toupper(word[0]);
        cout<< word <<' ';
    }    //cout << s;
    return 0;
}
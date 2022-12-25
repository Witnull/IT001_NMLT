#include <bits/stdc++.h>
using namespace std;

int main(){
    string n, m;
    int c ,p; c = p=  0;
    cin >> n >> m;
    if(n.size() > m.size()){ cout << 0; return 0;}
    if(m.substr(m.size()-n.size(),n.size()) >= n) c++;
    stringstream (m.substr(0,m.size()-n.size())) >> p;
    c += p;
    cout << c;
    
    return 0;
}
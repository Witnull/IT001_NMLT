#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sample;
    cin >> n;
    vector <int> num(n), loc;
    for(int &i:num) cin >> i;
    cin >> sample;
    
    
    for(int i = 0; i < num.size(); i++)
        if(num[i] == sample)
            loc.push_back(i);
            
    if(loc.size() !=0)
        for(int i:loc) cout << i + 1 <<' ';
    else
        cout << "NO";
    return 0;
}
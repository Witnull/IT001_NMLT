// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   int _a,_b;
   cin >> _a;
   vector<int> a(_a);
   for(int &i:a) cin >> i;
   cin >> _b;
   vector<int> b(_b);
   for(int &i:b) cin >> i;
   vector<int> c(_a+_b);
    merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());
   for(int i:c) cout<<i <<" ";
    return 0;
}
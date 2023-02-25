#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,M,eqM=0;
  cin >> n;
  vector<int> ls(n);
  for(int &i:ls) cin >> i;
  sort(ls.begin(),ls.end(),greater<>());
  M = ls[0];
  
  for(int i:ls){
      if ( i == M) ++eqM;
      else break;
  }
    cout << M <<'\n'<< eqM;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  double sum1 = 1, sum2 = 1, sum3 = 1, l = 1, l2 = 1;
 for(int  i = 2; i <= n; i++){
     sum1 += pow(i,i);
     l*= i, l2 += i;
     sum2 += l;
     sum3 += 1/l2;
    // cout << l2 <<"\n";
     
 }
  cout << sum1<<"\n"<< sum2<<"\n"<< sum3 << endl;
  return 0;
}
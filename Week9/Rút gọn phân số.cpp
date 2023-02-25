#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
#define PhanSo string

void Nhap(PhanSo (&x)[MAXN], int &n){
  int a, b, d;
  cin >> n;
  for( int i = 0 ;  i < n ; i++){
      cin >> a >> b;
      string mark = ((a < 0 || b < 0) && a != 0? ((a < 0 && b < 0)?"":"-"):"");
          a = abs(a); b = abs(b);
          d = __gcd(a, b);
          
          x[i] = ( b == 0? "Khong thoa yeu cau bai toan" : mark + (b/d == 1? to_string(a/d) :to_string(a/d) + "/" + to_string(b/d))) ;
   }
}

void Xuat(PhanSo (&a)[MAXN], int &n){
    for( int i = 0 ;  i < n ; i++)
        cout << a[i] << endl;
}
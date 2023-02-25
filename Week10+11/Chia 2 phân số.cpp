#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
    int t,m;
};

PhanSo Nhap(){
    PhanSo p;
    cin >> p.t >> p.m;
    return p;
}

void Nhap(PhanSo &p){
    cin >> p.t >> p.m;
}

auto Chia(PhanSo h, PhanSo j){
    int a = h.t, b = h.m, c = j.t, d = j.m;
    a *= d, b *= c;
    int x = __gcd(a,b);
    a/=x,b/=x;
    if(floor(a/b) ==(double) a/b){
      return to_string(a/b);
    }else{
       return  (a<0||b<0?"-":"" ) + to_string(abs(a)) +"/"+ to_string(abs(b)) ;
    }
}

void Xuat(auto a){
    cout << a;
}
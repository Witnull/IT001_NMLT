#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    int tu, mau;
};

void Nhap(PhanSo &a){
    cin >> a.tu >> a.mau;
}

PhanSo Nhap(){
    PhanSo p;
    cin >> p.tu >> p.mau;
    return p;
}
string Cong(PhanSo a, PhanSo b){
    PhanSo kq;
    kq.tu = a.mau * b.tu + b.mau*a.tu;
    kq.mau = a.mau* b.mau;
    
    int x = __gcd(kq.tu,kq.mau);
    kq.tu /=x;
    kq.mau/=x;
    
    if(floor(kq.tu/kq.mau) == (float) kq.tu/kq.mau ) return to_string( kq.tu/kq.mau);
    
    return (kq.tu < 0 || kq.mau < 0? "-":"") + to_string(abs(kq.tu)) +"/"+ to_string( abs(kq.mau));
}

void Xuat(string s){
    cout << s;
}
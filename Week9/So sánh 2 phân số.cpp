#include <iostream>
#include <string>
using namespace std;
struct PhanSo {
    int num1;
    int num2;
};
PhanSo Nhap(){
    PhanSo p;
    cin >> p.num1 >> p.num2;
    return p;
}

void Nhap(PhanSo &p){
    cin >> p.num1 >> p.num2;
}
int SoSanh(PhanSo a, PhanSo b){
    double x1 = (double) a.num1/a.num2,x2 =  (double) b.num1/b.num2; 
   // cout << x1 <<' '<< x2 << endl;
    if (x1 == x2){ return 0;}
    else if( x1 > x2) return 1;
    else return -1;
}
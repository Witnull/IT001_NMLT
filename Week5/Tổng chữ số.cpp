#include <iostream>
using namespace std;
int TongChuSo(int n){
    int s= 0;
    while(n>0){
        s += n%10;
        n/=10;
    }
    return s;
}
int input( int &a){
    cin >> a;
    return a;
}
  int main() {
    int a;
    input(a);
    cout << TongChuSo(a);
    return 0;
}

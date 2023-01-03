#include <iostream>
#include <math.h>
using namespace std;
bool IsPrime(int m){
    int i, m2;
    if (m % 2 == 0)
        return false;
    m2 = sqrt(m);
    for (i=3; i<=m2; i += 2)
        if (m % i == 0)
            return false;
    return true;
}
int sumPrime(int n){
    int sum = 2, i = 2;
    n -=1;
    while(n > 0){
        if(IsPrime(i)){
            sum += i;
            n--;
        }
        i++;
    }
	return sum;
}

int main() {
   int n;
   do{
       cin >> n;
       if(n <= 0 || n > 50 ) cout << "Gia tri vua nhap la "<< n<<", khong hop le. Vui long nhap lai."<< endl;
   } while(n <= 0 || n > 50);
  cout << "Tong "<< n <<" so nguyen to dau tien la: "<< sumPrime(n);
}
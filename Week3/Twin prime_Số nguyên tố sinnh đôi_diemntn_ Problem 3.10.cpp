#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
     if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(){
   int n, t;
   cin >> n;
   t =0;
   for(int i = 3; i < n; i+=2){
        if(isPrime(i) && isPrime(i-2)){
            cout<< i-2 <<", "<< i << endl;
            t++;
        }
   }
   cout <<"Tong: "<< t<<" cap so sinh doi < " <<n;
return 0;
}
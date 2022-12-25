#include <bits/stdc++.h>
using namespace std;

int dig(int n, int index){
    return (n/(long)pow(10, index))%10;
}
int Ad(int n){
    if (n<10) return 1;
    else return 1+Ad(n/10);
}
int main(){
    int n;
    cin>>n;
    for (int i=1000; i<=9999; i++){
        int sum1 = dig(i, 0)+dig(i, 1);
        int sum2 = dig(i, 2)+dig(i, 3);
        int p = pow(10, Ad((sum1>sum2)?sum2:sum1));
        int ans = (sum1>sum2)? sum1*p+sum2 : sum2*p+sum1;
        if (ans==n){
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
// chơi hard mode lun :)))
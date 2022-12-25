#include <iostream>
using namespace std;

int sum_even_divisor(int n)
{
    if (n%2 != 0)
        return -1;
    int sum = 0;
    for (int i = 2; i <= n; i+=2)
    {
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
 }
int Input(){
    int a;
    cin >> a;
    return a;
}int main() {
	int n;
	n=Input();
	cout << sum_even_divisor(n);
}
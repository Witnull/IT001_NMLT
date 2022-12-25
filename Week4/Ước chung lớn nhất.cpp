#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
   return __gcd(a,b);
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n);
	return 0;
}

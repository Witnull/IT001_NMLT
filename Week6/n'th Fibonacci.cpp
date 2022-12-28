
#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x)
{
    int p = 0, c = 1;
    for (int i = 0; i < x - 1; i++)
    {
        int n = p + c;
        p = c;
        c = n;
    }

    return c;
}
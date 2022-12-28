#include <iostream>
#include <iomanip>
using namespace std;

double sx(double x)
{
   double t = x;
   double six = t;
   for ( int a=1; a<50; ++a)
   {
      double mult = -x*x/((2*a+1)*(2*a));
      t *= mult;
      six += t;
   }
   return six;
}
int main(){
    double x;
    cin >> x;
    printf("%.4f",sx(x));
}
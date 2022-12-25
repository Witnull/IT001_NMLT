#include <bits/stdc++.h>
using namespace std;

string Ranking(double a){
   string msg;
   if (a>=9)
    msg ="XUAT SAC";
    else if(a>=8)
    msg ="GIOI";
    else if(a>=7)
    msg ="KHA";
    else if(a>=6)
    msg ="TB KHA";
    else if(a >=5)
    msg ="TB";
    else if(a>=4)
    msg = "YEU";
    else
    msg = "KEM";
   return msg;
}

int main(){
   double T,L,H;
   cin >> T >> L>> H;
   printf("DTB = %.2f \n", (T+L+H)/3);
   cout << "Loai: " << Ranking((T+L+H)/3);
}
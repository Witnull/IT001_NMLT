#include <bits/stdc++.h>

using namespace std;

int main(){
   int a, c;
   cin >> a;
   vector <int> b(a);
   for (int &i:b ) cin >> i;
   cin >> c;
   
   for(int i =0; i < a; i++ ){
       for(int j =i; j < a; j++ ){
         if (b[i] + b[j] == c){
             cout << "YES"; return 0;
         }
    }
   }
    cout << "NO";

}
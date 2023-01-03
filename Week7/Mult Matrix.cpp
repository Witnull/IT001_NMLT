#include <bits/stdc++.h>
using namespace std;
#define MAXC 100
#define MAXR 100
void NhapMaTran(float (&a)[MAXR][MAXC],int &m, int &n){
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
           cin >>a[i][j];
        }
    }
}
int main() {
   float a[MAXR][MAXC], b[MAXR][MAXC];
   int m, n, l,k;
   NhapMaTran(a, m, n);
   NhapMaTran(b, l, k);
   
   if(n != l) return 0;
   float mult[m][k];
   for(int i = 0; i < m; i++){
        for(int j = 0; j < k; j++){
            mult[i][j] = 0;
           for(int g = 0; g < n; g++)
                mult[i][j] += a[i][g] * b[g][j];
            cout << mult[i][j] <<' ';
        }
        cout << endl;
    }
}
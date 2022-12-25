#include <bits/stdc++.h>
using namespace std;
#define MAXR 100
#define MAXC 100

void NhapMaTran(int (&a)[MAXR][MAXC],int &n){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           cin >>a[i][j];
        }
    }
}
bool isMaTranDonVi(int a[MAXR][MAXC], int N){
     for (int r = 0; r < N; r++){
        for (int c = 0; c < N; c++){
            if (r == c && a[r][c] != 1)
                return false;
            else if (r != c && a[r][c] != 0)
                return false;
        }
    }
    return true;
}
int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}

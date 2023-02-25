#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    string newMat[col][row] = {};
    for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
         string s; cin >> s;
         newMat[j][i] = s;
     }
      
    for(int x = 0; x < col; x++){
        for( int y = 0 ; y < row; y++){
            cout << newMat[x][y] << ' ';
        }
        cout << endl;
    }
}
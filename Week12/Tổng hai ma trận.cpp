#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  float a[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      float x ;
      cin >> x;
     // cout << a[i][j] <<'+' << x <<'\t';
      a[i][j] += x;
    }
 //   cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
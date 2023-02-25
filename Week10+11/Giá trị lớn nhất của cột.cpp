#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, i ,j;
    double z;
    cin >> x >> y;
    vector <double> ls(y,0);
    for(i = 0; i < x; i++){
         for(j = 0; j < y; j++){
            cin >> z;
            if (ls[j] < z){
                ls[j] = z;
            }
        }
    }
    for(i = 0 ; i < y; i++){
        cout << "Gia tri lon nhat tren cot "<<i<<" la: "<<ls[i]<<endl;
    }
    return 0;
}
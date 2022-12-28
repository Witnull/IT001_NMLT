#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float x;
    bool isF = true;
    int lockrc = -999;

    cin >> n >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            //cout << i <<'*'<<j<<'='<<x<<' '; 
            if(i == j ){
                if ( x == 1)
                    isF == true;
                else if(x != 1){
                    isF = false;
                  //  cout << "stop at 1";
                    break;
                }
            }
            else 
            if(i != j && x != 0){
                if (i > j){
                    if(lockrc == -999  )
                        lockrc = j;
                    if(lockrc != j){
                        isF = false;
                       // cout << "stop at 2";
                        break;
                    }
                 }
                 else{
                     isF = false;
                     //cout << "stop at 3";
                     break;
                 }
            }
        }
        cout << endl;
        if(isF == false)
            break;
    }
    cout << (isF == true?"Yes":"No");
    return 0;
}
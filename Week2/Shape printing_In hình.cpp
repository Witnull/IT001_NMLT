#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    //rectangle
    for(int row = 0; row < 4 ; row++){
        for(int pos = 0; pos < 6; pos++)
            if(row == 0 || row == 3) cout<< x<<' ';
            else
                if(pos == 0|| pos ==5) cout <<x <<' ';
                else cout <<' ' << ' ';
    cout << endl;
    }
    // triangle
    for(int row = 0; row < 6; row++){
        for(int pos =0; pos < 12 ; pos++){
            if(row == 0 && pos == 5) cout << x; 
            else if(row == 0) cout << ' ' ;
            if(row > 0 && row < 5)
                if(pos == 5-row || pos == 5+row)
                    cout << x;
                else cout << ' ' ;
            if(row == 5 && pos%2 ==0) cout << x ;else if(row == 5) cout << ' ';
            
        }
    cout << endl;
    }
    return 0;
}
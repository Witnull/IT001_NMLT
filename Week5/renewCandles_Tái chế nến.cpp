#include <iostream>
using namespace std;

int candle(int candles, int makeNew){
    // Decode
    int initval;
        if(makeNew > 1000){
            initval = makeNew%1000;
            makeNew /=1000;
        } else initval = candles;
   ////////////
    
    if (candles < makeNew) return initval;
    int spare = candles%makeNew;
    candles/=makeNew;
    
    //Encode
    makeNew = makeNew*1000+initval;
    //////////////
    
    return candles + candle(candles+spare,makeNew);
}

int main (){
    int candles, makeNew;
    cin >> candles >> makeNew;
	cout << candle(candles, makeNew);
}

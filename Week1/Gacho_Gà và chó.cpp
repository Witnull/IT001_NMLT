#include <bits/stdc++.h>
using namespace std;

int main(){
    int64_t con, chan, cho, ga;
    cin >> con >> chan;
    cho = (chan - con*2)/2;
    ga = con - cho;
    cout << ga << " "<< cho;
    return 0;
}
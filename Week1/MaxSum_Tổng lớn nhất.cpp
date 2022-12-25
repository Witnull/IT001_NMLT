#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, M,m;
    int64_t sum, sum2;
    cin >> n;
    vector<int> v(n);
    for(int &i:v) cin >> i;
///////////////////////////// TH1
    sum2 = 0;
    for(int i = 0; i< v.size(); i++)
        sum2 += (i%2 ==0?v[i]:-v[i]);
///////////////////////////// TH2
    M =0; m =1;
    for(int j =0; j <v.size();j+=2) { if(v[j] <= v[m]) m = j;};
    for(int i =1; i <v.size();i+=2) { if(v[i] >= v[M]) M = i;};

    //swap
    int tmp = v[M];
    v[M] = v[m];
    v[m] = tmp;
    //
    sum =0;
    for(int i = 0; i< v.size(); i++)
        sum += (i%2 ==0?v[i]:-v[i]);
////////////////////////////////////
    cout << max(sum,sum2) ;

    return 0;
}
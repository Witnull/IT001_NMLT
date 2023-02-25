#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ham[10006], nm = 0;
bool ham1[100006];
void siu(int block) {
    ham[++nm] = 2;for(int i = 3; i * i <= block; i += 2)
    if (!ham1[i / 2])
    for(int j = i * i; j <= block; j += 2 * i)
        ham1[j / 2] = true;
    for(int i = 3; i <= block; ++i)
        if (!ham1[i / 2]) 
            ham[++nm] = i;
}
int delta[5006];
bool tick[100006];
vector<int> P[5006], tmp;
int main() {
    int l, r; cin >> l >> r;
    int kand = 0;
    siu((int) sqrt(r));
    for(int i = l; i <= r; ++i) {
        int x = i;
        for(int j = 1; j <= nm; ++j) {
            int p = ham[j];
            if (x % p == 0) {
                P[i - l + 1].push_back(p);
                while (x % p == 0) x /= p;
            }
        }
        delta[i - l + 1] = x;
    }
    for(int i = l; i <= r; ++i) {
        bool ok = true;
        for(int p: P[i - l + 1])
        if (i % (p * p) == 0) ok = false;
        if (!ok) continue;
        tmp.push_back(i);
    }
    for(int i = 0; i < (int) tmp.size(); ++i) {
        int b = tmp[i];

        for(int p: P[b - l + 1]) tick[p] = true;

        for(int j = 0; j < i; ++j) {
            bool ok = true; int a = tmp[j];

            for(int p: P[a - l + 1])
            if (tick[p]) {
                ok = false;
                break;
            }
            ok &= delta[a - l + 1] == 1 || delta[b - l + 1] == 1 || delta[a - l + 1] != delta[b - l + 1];
            kand += ok;
        }
        for(int p: P[b - l + 1]) tick[p] = false;
    }
    cout << kand;
 return 0;
}
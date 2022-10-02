#include <bits/stdc++.h>
using namespace std;
using ll = long long;

__int128_t zc(__int128 a){
    __int128_t x = 0;
    while(a > 0){
        x += a % 10;
        a /= 10;
    }
    return x;
}

__int128_t pretrazi(__int128_t x,__int128_t y,__int128_t a,__int128_t b){
    vector<__int128_t> q;
    for(__int128_t i = 1; i <= 162; i++){
        if(a * i + b <= y && a * i + b >= x){
           q.push_back(a*i+b);
        }
    }
    for(__int128_t i = 0; i < q.size(); i++){
        if(a*zc(q[i])+b == q[i]){
            return q[i];
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    __int128_t x,y,a,b;
    cin >> x >> y >> a >> b;
    cout << pretrazi(x,y,a,b) << "\n";
    return 0;
}
     


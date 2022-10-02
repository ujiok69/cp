#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,q,s,d;
    s = 0;
    d = 0;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }
    cin >> q;
    for(long long i = 0; i < q; i++){
        long long w,l,r,x;
        cin >> w;
        if(w == 1){
            cin >> l >> r >> x;
            if(x > 0){
                s += (r-l+1)*x;
            }
        }
        else{
            d++;
        }
    }
    cout << s*d;
    return 0;
}

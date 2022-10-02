#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll izr(string s, ll n){
    ll q;
    for(ll i = 1; i <= n/2; i++){
        if(s[i] == 'L'){
            q += i-1;  
        }
        else{
            q += n - i;
        }
    }
    for(ll i = n/2+1; i <= n; i++){
        if(s[i] == 'L'){
            q += n - i;
        }
        else{
            q += i-1;
        }
    }
    return q;
}

ll main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        cout << izr(s,n);
    }
    return 0ll;
}
     


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
      
void solve(){
    ll n;
    cin >> n;
    ll x,y;
    if(n % 4 == 0 || n % 4 == 2){
        x = n/4;
    }
    else{
        x = -1;
    }
    if(n % 6 == 0){
        y = n/6;
    }
    else if(n%6 == 2 || n%6 == 4){
        y = (n/6)+1;
    }
    else{
        y = -1;
    }
    if(y == -1 || x == -1){
        cout << -1 << "\n";
    }
    else if(n == 2){
        cout << -1 << "\n";
    }
    else{
        cout << y << " " << x << "\n";
    }
}
     
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}
     


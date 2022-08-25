#include <bits/stdc++.h>
using namespace std;
using ll = long long;
      
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int e = 0;
    bool ok = true;
    for(int i = n-1; i > 0; i--){
        if(a[i] == 0){
            ok = false;
            break;
        }
        while(!(a[i-1] < a[i])){
            a[i-1] /= 2;
            e++;
        }
    }
    if(!ok){
        cout << -1 << endl;
    }
    else{
        cout << e << endl;
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
     


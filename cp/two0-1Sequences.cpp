#include <bits/stdc++.h>
using namespace std;
  
void solve(){
    int n, m;
    cin >> n >> m;
    string a;
    string b;
    cin >> a;
    cin >> b;
    bool ok = true;
    bool qk = false;
    for(int i = 1; i < m; i++){
        if(a[n-m+i] != b[i]){
            ok = false;
        }
    }
    for(int i = 0; i < n-m+1; i++){
        if(a[i] == b[0]){
            qk = true;
            break;
        }
    }
    if(ok == false || qk == false){
        cout << "NO" << endl;
    }
    else if(ok == true && qk == true){
        cout << "YES" << endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        solve();
    }
    return 0;
}


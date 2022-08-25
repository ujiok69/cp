#include <bits/stdc++.h>
using namespace std;
  
void solve(){
    int n;
    bool h;
    cin >> n;
    vector<int> a(n);
    h = true;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] % a[0] != 0){
            h = false;
        }
    }
    if(h == false){
        cout << "NO" << endl;
    }
    else{
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


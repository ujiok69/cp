#include <bits/stdc++.h>
using namespace std;
  
void solve(){
    int n;
    cin >> n;
    cout << n << " ";
    for(int i = 1; i < n; i++){
        cout << i << " ";
    }
    cout << endl;
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


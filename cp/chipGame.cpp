#include <bits/stdc++.h>
using namespace std;
  
void solve(){
    int n,m;
    cin >> n >> m;
    if((n+m-1) % 2 == 1){
        cout << "Tonya" << endl;
    }
    else {
        cout << "Burenka" << endl;
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


#include <bits/stdc++.h>
using namespace std;
  
void solve(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        for(int i = 1; i <= n; i += 2){
        cout << i + 1 << " " << i << " ";
        }
    }
    else if(n == 1){
        cout << 1;
    }
    else{
        cout << 1 << " ";
        for(int i = 3; i <= n; i += 2){
            cout << i << " " << i - 1 << " ";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        solve();
        cout << endl;
    }
    return 0;
}


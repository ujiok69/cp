#include <bits/stdc++.h>
using namespace std;
using ll = long long;
      
void solve(){
    int n,m,sx,sy,d;
    cin >> n >> m >> sx >> sy >> d;
    if(sx+d >= n && sy+d >= m || sx-1 <= d && sy-1 <= d || n == 1 || m == 1){
        cout << -1 << endl;
    }
    else{
        cout << n+m-2 << endl;
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
     


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b,c;
    cin >> n;
    cin >> a >> b >> c;
    int x[3] = {a,b,c};
    if(x[x[n-1]-1] == 0 || x[n-1] == 0){
        cout << "no" << endl;
    }
    else{
        cout << "yes" << endl;
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

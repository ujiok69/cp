#include <bits/stdc++.h>
using namespace std;
  
void solve(){
    int n,k,c;
    cin >> n >> k;
    c = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > k && i < k){
            c++;
        }
    }
    cout << c << endl;

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


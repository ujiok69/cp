#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x = 1;
    while(a[x] >= a[x-1] && x < n){
        x++;
    }
    while(a[x] <= a[x-1] && x < n){
        x++;
    }
    if(x == n){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
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

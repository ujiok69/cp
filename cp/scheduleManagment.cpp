#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int m,n;
    cin >> m >> n;
    vector<int> a(m);
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    a.sort(a.begin(), a.end());
    a.unique

}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}

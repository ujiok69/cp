#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    set <char>y (begin(a) , end(a));
    vector<char> x(a.begin(), a.end());
    cout << y.size() * 2 + x.size() - y.size() << endl;
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

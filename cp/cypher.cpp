#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    vector<int> a, b;
    vector<string> c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int x; string y;
        cin >> x >> y;
        for(int j = 0; j < x; j++){
            if(y[j] == 'U'){a.insert(a.begin() + i, ((a[i] - 1) % 10)); a.erase(a.begin()+i);}
            else{a.insert(a.begin() + i, ((a[i] + 1) % 10)); a.erase(a.begin()+i);}
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
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


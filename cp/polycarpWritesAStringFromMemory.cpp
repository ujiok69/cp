#include<bits/stdc++.h>
using namespace std;

void solve(){
    string n;
    int i;
    i = 0;
    cin >> n;
    set<char> a;
    int j = 0;
    for(int j = 0; j < n.length(); j++){
        a.insert(n[j]);
        if(a.size() > 3){
            i++;
            a.clear();
            a.insert(n[j]);
        }
    }
    if(a.size() != 0){
        i++;
    }
    cout << i << endl;
    
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


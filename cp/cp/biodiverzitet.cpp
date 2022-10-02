#include <bits/stdc++.h>
using namespace std;
using ll = long long;
     
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int n,k;
    cin >> n >> k;
    set<int> b;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        b.insert(x/k);
    }
        cout << b.size() << "\n";
    return 0;
}
     


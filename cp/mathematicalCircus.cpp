#include <bits/stdc++.h>
using namespace std;
  
void solve(){
    int n,k,c;
    c = 0;
    cin >> n >> k;
    vector<int> a(n/2);
    vector<int> b(n/2);
    for(int i = 1; i < n+1; i++){
        if(i % 4 == 0){
            a.insert((a.begin()+i-1),i);
            c++;
        }
        else if((i+k) % 4 == 0){
            a.insert((a.begin()+i-1),i);
            c++;
        }
        else{
            b.push_back(i);
        }
    }
    if(c < n/2){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        for(int i = 1; i <= n/2; i++){
            cout << a[i] << " " << b[i] << endl;
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
    }
    return 0;
}


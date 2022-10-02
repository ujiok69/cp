#include<iostream>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x = 0;
    for(int i = 0; i < n; i++){
        x += a[i];
    }
    if(x-m < 0){
        cout << 0 << endl;
    }
    else{
        cout << x-m << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        solve();
    }
    return 0;
}

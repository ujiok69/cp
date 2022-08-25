#include<iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n == 2){
        cout << 1 << " " << 2 << endl;
    }
    else{
        for(int i = 1; i <= n; i += 2){
            for(int j = i; j <= n; j*=2){
                cout << j << " ";
            }
        }
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        cout << 2 << endl;
        solve();
    }
    return 0;
}


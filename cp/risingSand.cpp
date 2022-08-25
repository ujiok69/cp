#include<iostream>
#include<cmath>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(k > 1){
        int h = 0;
        for(int i = 1; i < (n - 1); i++){
            if(a[i] > (a[i+1] + a[i-1])){
                h++;
            }
        }
        cout << h << endl;
    }
    else{
        cout << (n - 1) / 2 << endl;
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

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    cout << n << endl;
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        cout << endl;

    }


}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}


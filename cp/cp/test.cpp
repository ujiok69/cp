#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int s,n;
    cin >> s >> n;
    vector<int> a(50000);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int y = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] + a[j] == s){
                y++;
            }
        }
    }
    cout << y << endl;
    return 0;
}
     


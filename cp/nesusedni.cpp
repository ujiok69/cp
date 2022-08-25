#include <bits/stdc++.h>
using namespace std;
using ll = long long;
      
void solve(){
    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;
    if(abs(a-b) < 2){
        if(a>b){
            for(int i = 0; i < b; i++){
                cout << s;
            }
            cout << s[0];
        }
        else if(b>a){
            cout << s[1];
            for(int i = 0; i < a; i++){
                cout << s;
            }
        }
        else{
            for(int i = 0; i < a; i++){
                cout << s;
            }
        }
    }
    else{
        cout << "nemoguce";
    }
}
     
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t = 1;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}
     


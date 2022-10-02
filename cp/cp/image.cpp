#include <bits/stdc++.h>
using namespace std;
using ll = long long;
      
void solve(){
    string s,d;
    cin >> s >> d;
    if(s[0] == s[1] && s[0] == d[0] && s[0] == d[1]){
        cout << 0 << endl;
    }
    else if((s[0] == s[1] && d[0] == d[1]) || (s[0] == d[0] && s[1] == d[1]) || (s[0] == d[1] && s[1] == d[0]) || (s[0] == s[1] && s[1] == d[0])|| (s[0] == s[1] && s[0] == d[1]) || (d[0] == d[1] && d[0] == s[1]) || (d[0] == d[1] && d[0] == s[0])){
        cout << 1 << endl;
    }
    else if(s[0] == s[1] || d[0] == d[1] || s[0] == d[0] || s[1] == d[1]
 || s[0] == d[1] || s[1] == d[0]){
        cout << 2 << endl;
    }
    else{
        cout << 3 << endl;
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
     


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
     
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int n;
    cin >> n;
    int o,a,b,ab;
    cin >> o >> a >> b >> ab;
    for(int i = 0; i < n; i++){
        string s;
        int q;
        cin >> s >> q;
        if(s == "O"){
            o -= q;
            if(o < 0){
                cout << "nemoguce" << "\n";
            }
            else{
                cout << q << 0 << 0 << 0 << "\n";
            }
        }
    }
    for(int i = 0; i < n; i++){
        string s;
        int q;
        cin >> s >> q;
        if(s == "A"){
            a -= q;
            if(a < 0){
                o += a;
                cout << -a << q << 0 << 0 << "\n";
                if(o < 0){
                    cout << "nemoguce" << "\n";
                }
            }
            else{
                cout << 0 << q << 0 << 0 << "\n";
            }
            
        }
    }
    return 0;
}
     


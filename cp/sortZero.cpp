#include <bits/stdc++.h>
using namespace std;
#define long long = ll;

bool ch(vector<int> z){
    for(int i = 1; i < z.size(); i++){
        if(z[i] < z[i-1]){
            return false;
        }
    }
    return true;
}

int h(vector<int> w){
    vector<int> e;
    set<int> s(w.begin(), w.end());
    e.assign(s.begin(), s.end());
    int i = 0;
    while(i < e.size()){
        if(ch(w)){
            break;
        }
        else{
            for(int j = 0; j < w.size(); j++){
                if(w[j] == e[i]){
                    w[j] = 0;
                }
            }
        }
        i++;
    }
    return i;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << h(a) << endl;  
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

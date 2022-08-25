#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a, pos, neg;
    bool dalije = true;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > 0){
            pos.push_back(x);
        }
        else if(x < 0){
            neg.push_back(x);
        }
        else{
            if(a.size() < 2){
               a.push_back(x);
            }
        }

    }
    if(neg.size() > 2 || pos.size() > 2){
        dalije = false;
    }

    else{
        for(int i : pos){
            a.push_back(i);
        }

        for(int i : neg){
            a.push_back(i);
        }

        for(int i = 0; i < a.size(); i++){
            for(int j = i + 1; j < a.size(); j++){
                for(int k = j + 1; k < a.size(); k++){
                    int x = a[i] + a[j] + a[k];
                    if (!(count(a.begin(), a.end(), x))){
                        dalije = false;
                    }
                }
            }
        }
    }

    if(dalije == false){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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

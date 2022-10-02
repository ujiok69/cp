#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1,s2;
        cin >> s1;
        cin >> s2;
        bool y = true;
        for(int i = 0; i < n; i++){
            if(s1[i] == 'R' && s2[i] != 'R' || s2[i] == 'R' && s1[i] != 'R'){
                y = false;
            }
        }
        if(y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

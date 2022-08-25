#include <bits/stdc++.h>
using namespace std;
  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int t;
    cin >> t;
    while(t--){
        int n,m,q,w;
        cin >> n >> m;
        q = 0;
        w = 0;
        vector<vector<char>> a(n, vector<char>(m));
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            for(int j = 0; j < m; j++){
                a[i][j] = s[j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == '1'){
                    q++;
                }
                else{
                    w++;
                }
            }
        }
        int x = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < m-1; j++){
                int y = 0;
                if(a[i][j] == '0'){
                    y++;
                }
                if(a[i+1][j+1] == '0'){
                    y++;
                }
                if(a[i][j+1] == '0'){
                    y++;
                }
                if(a[i+1][j] == '0'){
                    y++;
                }
                if(y > x){
                    x = y;
                }
            }
        }
        if(q == 0){
            cout << 0 << endl;
        }
        else if(x == 0){
            cout << q - 2 << endl;
        }
        else if(x == 1){
            cout << q - 1 << endl;
        }
        else{
            cout << q << endl;
        }
    }

    return 0;
}


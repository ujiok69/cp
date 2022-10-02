#include <bits/stdc++.h>
using namespace std;
  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int l,r;
    cin >> l >> r;
    string s = "atcoder";
    int i = l-1;
    while(i < r){
        cout << s[i];
        i++;
    }
    return 0;
}


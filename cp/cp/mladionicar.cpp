#include <bits/stdc++.h>
using namespace std;
using ll = long long;
     
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    if(a > n/2 || b > n/2 || c > n/2){
        cout << "nemoguce" << "\n";
    }
    else{
        cout << "moguce" << "\n";
         int na = n-a+1;
         int nb = n-b+1;
         int nc = n-c+1;
         cout << n-na << " " << n-nb << " " << n-(n-na)-(n-nb) << "\n";
    }
    
    return 0;
}
     


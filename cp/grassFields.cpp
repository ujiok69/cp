#include<iostream>
using namespace std;
void solve(){
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    if(a == b && b == c && c == d && d == a &&  d == 0){
        cout << 0 << endl;
    }
    else if(a == b && b == c && c == d && d == a && d == 1){
        cout << 2 << endl;
    }
    else{
        cout << 1 << endl;
    }

}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}

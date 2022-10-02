#include<iostream>
using namespace std;
void solve(){
    int a,b,c,d,h;
    h = 0;
    cin >> a >> b >> c >> d;
    if(b > a){
        h++;
    }
    if(c > a){
        h++;
    }
    if(d > a){
        h++;
    }
    cout << h << endl;

}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}

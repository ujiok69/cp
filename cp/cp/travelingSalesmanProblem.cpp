#include<iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int maxx,maxy,miny,minx;
    maxx = 0;
    maxy = 0;
    miny = 0;
    minx = 0;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        if(x > maxx){
            maxx = x;
        }
        else if(x < minx){
            minx = x;
        }
        else if(y > maxy){
            maxy = y;
        }
        else if(y < miny){
            miny = y;
        }
    }
    cout << (abs(minx) + abs(miny) + abs(maxx) + abs(maxy)) * 2 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}

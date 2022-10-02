#include<bits/stdc++.h>
using namespace std;

int hg[5] = {600, 60, 0, 10, 1};
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

void solve(){
    string s;
    vector<int> a;
    cin >> s;
    int x;
    cin >> x;
    int r = 0;
    for(int j = 0; j < 5; j++){
        r += (int)(s[j] - '0') * hg[j];
    }
    for(int i = 0; i < 1440; i++){
        a.push_back((r+x) % 1440);
        r += x;
    }
    sort( a.begin(), a.end() );
    a.erase( unique( a.begin(), a.end() ), a.end() );
    int rez = 0;
    for(int i : a){
        for(int j = 0; j < 16; j++){
            if(i == good[j]){
                rez++;
            }
        }
    }
    cout << rez << endl;
    //for(int i : a){
    //    cout << i << " ";
    //}
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;

}

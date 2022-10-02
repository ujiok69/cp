#include<bits/stdc++.h>
using namespace std;
void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l;
    cin >> n >> l;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    float r = 0;
    for(int i = 0; i < n - 1; i++){
        if(v[i+1] - v[i] > r){
            r = v[i+1] - v[i];
        }
    }
    r /= 2;
    float y = v[0];
    float z = l - v[n-1];
    float znj = max(y,z);
    float rez = max(znj,r);
    cout << fixed << showpoint << setprecision(9) << rez << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> a(10000000);
    vector<long long> l(10000000);
    vector<long long> r(10000000);
    for(long long i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(long long i = 1; i < n; i++){
        l[i] = (0 > a[i+1] - a[i]) ? 0 : a[i+1]-a[i];
    }
    for(long long i = 1; i < n; i++){
        r[i] = (0 > a[i] - a[i+1]) ? 0 : a[i]-a[i+1];
    }
    for(long long i = 1; i < n; i++){
        l[i+1] += l[i];
        r[i+1] += r[i];
    }
    for(long long i = 0; i < m; i++){
        long long x,y;
        cin >> x >> y;
        if(x < y){
            cout << r[y-1] - r[x-1] << endl;
        }
        else{
            cout << l[x-1] - l[y-1] << endl;
        }
    }
    return 0;
}

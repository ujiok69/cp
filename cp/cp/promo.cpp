    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);    
        long long n,q;
        cin >> n >> q;
        vector<long long> a(n+1);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for(long long i = 0; i < n; i++){
            a[i+1] += a[i];
        }
        for(long long i = 0; i < q; i++){
            long long x,y;
            cin >> x >> y;
            cout << a[n-x+y] - a[n-x] << endl;
        }
        return 0;
    }
     

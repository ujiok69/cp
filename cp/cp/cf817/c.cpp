#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> a(n);
        vector<string> b(n);
        vector<string> c(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int a1,b1,c1;
        a1 = 0; b1 = 0; c1 = 0;
        for(int i = 0; i < n; i++){
            bool okb;
            bool okc;
            okb = binary_search(b.begin(),b.end(),a[i]);
            okc = binary_search(c.begin(),c.end(),a[i]);
            if(!okb && !okc){
                a1 += 3;
            }
            else if(okb && !okc || okc && !okb){
                a1 += 1;
            }
        }
        for(int i = 0; i < n; i++){
             bool oka;
             bool okc;
             oka = binary_search(a.begin(),a.end(),b[i]);
             okc = binary_search(c.begin(),c.end(),b[i]);
             if(!oka && !okc){
                 b1 += 3;
             }
             else if(oka && !okc || okc && !oka){
                 b1 += 1;
             }
         }
         for(int i = 0; i < n; i++){
              bool oka;
              bool okb;
              oka = binary_search(a.begin(),a.end(),c[i]);
              okb = binary_search(b.begin(),b.end(),c[i]);
              if(!oka && !okb){
                  c1 += 3;
              }
              else if(oka && !okb || okb && !oka){
                  c1 += 1;
              }
          }

        cout << a1 << " " << b1 << " " << c1 << endl;
    }
    return 0;
}

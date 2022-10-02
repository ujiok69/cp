#include<bits/stdc++.h>
using namespace std;

void solve(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;
    if(m > x){
        cout << t;
    }
    else{
        cout << m * d;
    }
}


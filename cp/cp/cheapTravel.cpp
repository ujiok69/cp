#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(m*a<=b){
        cout << n * a << endl;
    }
    else{
    cout << b * (n / m) + min(a * (n % m), b) << endl;
    }
    return 0;
}

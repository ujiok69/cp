#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int r,c;
    cin >> r >> c;
    if(r == 15 || r == 1 || c == 1 || c == 15){
        cout << "black";
    }
    else if(r == 14 || r == 2 || c == 14 || c == 2){
        cout << "white";
    }
    else if(r == 13 || r == 3 || c == 13 || c == 2){
        cout << "black";
    }
    else if(r == 12 || r == 4 || c == 12 || c == 4){
        cout << "white";
    }
    else if(r == 11 || r == 5 || c == 11 || c == 5){
        cout << "black";
    }
    else if(r == 10 || r == 6 || c == 10 || c == 6){
        cout << "white";
    }
    else if(r == 9 || r == 7 || c == 9 || c == 7){
        cout << "black";
    }
    else{
        cout << "white";
    }
    return 0;
}


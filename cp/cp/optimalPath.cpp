#include<iostream>
using namespace std;

int main(){
    int j;
    cin >> j;
	for(int i = 0; i < j; i++){
        unsigned long long m,n;
        cin >> n >> m;
        cout << (m*(m-1)/2)+ m * (n*(n+1)/2) << endl;
	}

	return 0;
}

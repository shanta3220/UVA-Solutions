#include <iostream>
using namespace std;

int main() {
	int n, sum;
	while(cin >> n && n != 0){
	    sum = 0;
	    for(int i = 1; i <= n; i++){
	        sum += i * i;
	    }
	    cout << sum <<"\n";
	}
	return 0;
}

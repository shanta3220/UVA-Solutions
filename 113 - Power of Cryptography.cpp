#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	long double x, n;
	
	while(cin >> x >> n){
	    n= pow(n,1/x);
	    cout<<fixed<<setprecision(0)<< n <<"\n"; 
	}
	return 0;
}

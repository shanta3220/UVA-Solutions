#include <iostream>
using namespace std;

int main() {
	long long int n, n2, j = 1, t, sum, r;
	cin >> t;
	while(t--){
	    cin >> n2;
	    
        if(n2 < 10)  n = n2 * n2;
        else n = n2;
   
	    while (n > 9){
	        sum = 0;
	        while( n != 0){
	            r = n % 10;
	            sum += r * r;
	            n = n/10;
	            
	        }
	        n = sum;
	     }
	     if(n == 1 || n ==7)
	           cout << "Case #" << j++ << ": " << n2 <<  " is a Happy number.\n";
	        else cout << "Case #" << j++ << ": " << n2 << " is an Unhappy number.\n";  
    }
	return 0;
}

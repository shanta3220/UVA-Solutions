#include <iostream>
using namespace std;

int main() {
	long long int n, n2;
	int j = 1, t, sum;
	cin >> t;
	while(t--){
	    cin >> n2;
	    n = n2;
	    if(n > 9){
	    	while (n > 9){
	             sum = 0;
	        	while( n != 0){
	            	    sum += (n % 10) * (n % 10);
	            	    n = n/10;
	            
	        }
	        n = sum;
	     }
	     if(n == 1 || n ==7 )
	           cout << "Case #" << j++ << ": " << n2 <<  " is a Happy number.\n";
	     else cout << "Case #" << j++ << ": " << n2 << " is an Unhappy number.\n";  
       	     }
	     else if (n == 1 || n == 7 )
	           cout << "Case #" << j++ << ": " << n2 <<  " is a Happy number.\n";
	     else cout << "Case #" << j++ << ": " << n2 << " is an Unhappy number.\n";  
        }
	return 0;
}
 

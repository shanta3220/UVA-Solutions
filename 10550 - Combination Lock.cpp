#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, sum, totalsum, degree;
	while(cin >> a >> b >> c >> d ){
	    if(a == 0 && b == 0 && c == 0 && d == 0) break;
	    totalsum = 1080;
	    sum = 0;
	    degree = 360 / 40;
	    if(a < b)
	        sum +=(40 - b) + a;
	    
	    else sum += (a - b);
	    
	    if(b <= c)
	        sum += (c - b);
	    else 
	        sum += (40 - b) + c;
	    
	    if(c < d)
	        sum += (40 - d) + c;
	    
	    else sum += (c - d);  
	    
	    totalsum += sum * degree;
	    cout << totalsum << "\n";
	    
	}
	return 0;
}

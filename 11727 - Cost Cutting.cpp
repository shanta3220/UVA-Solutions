#include <iostream>
using namespace std;

int main() {
    int x, y, z, i = 1, t;
    int s;
	cin >> t;
	
	while(t--){
	    cin >> x >> y >> z;
	    cout << "Case " << i++ <<": ";
	    if( x > y && x < z || x> z && x < y)
	        cout << x <<"\n";
	    else if( y > x && y < z || y> z && y < x)
	        cout << y <<"\n";    
	   else   cout << z <<"\n";   
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	int day;
	double h, u, d, f, s; 
	while(cin >> h >> u >> d >> f){
	    if(h == 0) break;
	    s = 0;
	    bool yes = true;
	    f = u * f/100;
	    day = 0;
	    while(yes == true){
	        day++;
	        s += u;
            if(u > 0) 
	            u -= f;
	        if(s > h) 
	            break;
	        s -= d;   
	        if(s < 0){
	             yes = false; 
	             break; 
	        }
	     }
	    if(yes==true) cout << "success on day " << day << "\n";
	    else cout << "failure on day "<< day << "\n";
	}
	return 0;
}

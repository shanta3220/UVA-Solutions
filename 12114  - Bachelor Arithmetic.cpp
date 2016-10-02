#include <iostream>
using namespace std;

int main() {
	int b, s, r, i=1;
	
	while(cin >> b >> s){
	    if(b == 0 && s == 0) break;
	    cout << "Case " << i++ << ": ";
	    if(b == 1 || s == 0)  cout<<":-\\\n";
	    else if(s >= b) cout<<":-|\n";
	    else cout << ":-(\n" ;
	}
	return 0;
}

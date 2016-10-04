#include <iostream>
using namespace std;

int main() {
	int t, m, a, b, s1, s2;
	cin >> t;
	while(t--){
	    cin >> m;
	    s1 = 0, s2 = 0;
	    for(int i = 0; i < m; i++){
	        cin >> a >> b;
	        s1 = s1 * 10 + a;
	        s2 = s2 * 10 + b;
	        
	    }
	    cout << s1 + s2 << "\n";
	    
	}
	
	return 0;
}

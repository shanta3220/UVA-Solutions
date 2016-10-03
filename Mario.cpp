#include <iostream>
using namespace std;

int main() {
	int t, n, c[50], lowjump, highjump,jump, j = 1;
	cin  >> t;
	while(t--){
	    cin >> n;
	    for(int k = 0; k < n; k++){
	        cin >> c[k];
	    }
	    if(c[1] == 0){
	        cout << "Case " << j++ << ":  0 0\n";
	    }
	    else jump = c[0];
	    
	    
	}
	return 0;
}

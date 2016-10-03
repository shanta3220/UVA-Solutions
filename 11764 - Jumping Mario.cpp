#include <iostream>
using namespace std;

int main() {
	int t, n, c[50], lowjump, highjump,jump, j = 1;
	cin  >> t;
	while(t--){
	    cin >> n;
	    lowjump = 0, highjump = 0;
	    for(int i = 0; i < n; i++){
	        cin >> c[i];
	    }
	    if(c[1] == 0){
	        cout << "Case " << j++ << ": " << highjump << " " << lowjump<<"\n";
	        break;
	    }
	    else jump = c[0];
	    for(int i = 0; i < n; i++){
	        if(jump > c[i]){
		        lowjump++; 
		        jump = c[i];
	        }
	        else if(jump < c[i]){
		        highjump++;
		        jump = c[i];
	        }
	        else continue;
	    }
	    cout << "Case " << j++ << ": " << highjump << " " << lowjump<<"\n";
	}
	return 0;
}

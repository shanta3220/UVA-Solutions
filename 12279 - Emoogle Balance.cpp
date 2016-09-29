#include <iostream>
using namespace std;

int main() {
	int n,t,togive=0,given=0,j=1;
	while(cin>>n&&n!=0){
	    togive=0,given=0;
	    for(int i=0; i<n; i++){
	        cin >> t;
	        if(t!=0)
	            togive++;
	        else given++;
	    }
	    cout << "Case " << j++ << ": " << togive - given <<"\n";
	}
	return 0;
}

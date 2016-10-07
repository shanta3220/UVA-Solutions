#include <iostream>
using namespace std;

int main() {
	int t, to, from, n;          //to = largest distance, from = smallest distance//
	cin >> t;
	while(t--){
	    cin >> n;
	    int distance[n], to = -99, from = 101;
	    while(n--){
	        cin >> distance[n];
	        if( distance[n] > to)
	            to = distance[n];
	        if( distance[n] < from)
	            from = distance[n];    
	    }
	    
	    cout << (to - from) * 2 <<"\n";
	}
	
	return 0;
}

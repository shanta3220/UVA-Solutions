#include <iostream>
#include <map>
using namespace std;

int main() {
	long long m2, n2, m, n;
	while(cin >> n >> m){
	    if(m == 0 && n == 0) break;
	    int c = 0;
	    map <long, long> mapn;
	    for(int i = 0; i < n; i++){
	        cin >> n2;
	        mapn[n2] = 1;
	    }
      
	    for(int j = 0; j < m; j++){
	        cin >> m2;
	        if(mapn[m2] == 1)
	           c++;
	    }
	    
	    cout <<c<<"\n";
  	}         
	
	    
	return 0;
}

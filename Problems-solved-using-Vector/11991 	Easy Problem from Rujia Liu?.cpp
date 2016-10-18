#include <iostream>
#include <vector>
using namespace std;

const int maxi = 1000000;
vector<int> vec[maxi];  

int main() {
	unsigned k;
	int n, m, l, temp;
	while(cin >> n >> m){
	   
	    for (int i = 0; i < maxi; i++)
	        vec[i].clear();
	    for (int i = 1; i <= n; i++){
	        cin >> temp;
	        vec[temp].push_back(i);
	    }
	    for (int i = 1; i <= m; i++){
    	    cin >> k >> l;
    	    if( k > vec[l].size())
    	        cout<<"0\n";
    	    else cout <<vec[l][k-1]<<"\n";
	    }    
	    
	}
	
	return 0;
}

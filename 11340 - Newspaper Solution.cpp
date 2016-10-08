#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	long int t, n, m, b[200];
	char a[200];
	cin >> t;
	while(t--){
	    double sum =0;
	    cin >> n;
	    cin.ignore();
	    for(int i = 1; i <= n; i++){
	        cin >> a[i] >> b[i];
	        
	    }   
	    cin >> m;
	    cin.ignore();
	    string s;
	    while(m--){
	        getline(cin,s);
	        for(int i = 1; i <= n; i++){
	            for(int k = 0; k < s.size(); k++){
    	        	if(s[k]==a[i]) sum += b[i];
    	      	    } 
	        }
	   }
	   cout << sum/100 <<"$\n";
	}
	return 0;
}

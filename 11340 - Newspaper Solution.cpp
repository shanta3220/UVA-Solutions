#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	long int t, n, m, b[200];
	char a[200];
	cin >> t;
	while(t--){
	    cin >> n;
	    
	    for(int i = 1; i <= n; i++){
	        cin >> a[i] >> b[i];
	        
	    }   
	    cin >> m;
	    string s;
	    double sum = 0;
	    for(int j = 1;j<=m;j++){
	        getline(cin,s);
	        for(int i = 1; i <= n; i++){
	            for(int k = 0; k < s.size(); k++){
    	        if(s[k]==a[i]) sum += b[i];
    	       
    	        } 
	        }
	   }
	   printf("%.2lf$\n",sum/100);
	}
	return 0;
}

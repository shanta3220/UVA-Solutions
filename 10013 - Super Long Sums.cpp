#include <iostream>
#include <string.h>
using namespace std;
int a[1000],b[1000],c[1000];
int main() {
	long long int t, z, m, sum;
	cin >> t;
    while(t--){
	    cin >> m;
	    z = 0;
	    for(int i = 0; i < m; i++)
	        cin >> a[i]>> b[i];
	    for(int j = m - 1; j>=0; j++){   
	        sum = a[j] + b[j] + z;
	        if(sum > 9){
	            c[j]= sum%10;
	            z = 1;
	        }
	        else{
	          c[j] = sum;
	          z =0;
	        }
	        
	   }
	   for(int j = 0; j < m; j++)
        cout<< c[j]<<"\n";
        if(t!=0) cout<< "\n";
       
	    
	}
	
	return 0;
}

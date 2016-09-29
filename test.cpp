#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int a[21],b[21];
	int c=0,b2=1,t,j=0;
	cin >> t;
	for(int i=0; i<t; i++){
	    cin>>a[i];
	     b[i]=0;
	}  
	for(int i=0; i<t; i++) {
	    for(int j=i+1; j<t; j++){
	     if (a[i]==a[j]){
	         c++;
	         b[j]+=c;
	         a[j]=a[i]-c;
	        }
	 
	    
	    }
	  }
	    for(int i=0; i<t; i++){
	    cout<< b[i] << " " <<a[i]<<"\n";
	   
	} 
	    
	
	return 0;
}

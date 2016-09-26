#include <iostream>
#include<string>
using namespace std;

int main() {
	string a;
	int b[1000],n,c; 
	while(cin>>a){
	    if(a[0]=='0'&&a[1]=='\0')
	        break;
	   
	    else{ 
	        c = 0;
	        n = a.length();
	        for(int i=0; i<n; i++){
	            b[i] = a[i] - '0';
	            c= c*10+ b[i];
	            c=c%11;
	        }
	        if(c%11==0)
	            cout<<a<<" is a multiple of 11.\n";
	        else cout<<a<<" is not a multiple of 11.\n";
	    }
	}
	return 0;
}

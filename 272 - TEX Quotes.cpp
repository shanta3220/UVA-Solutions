#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string s;
	while(getline(cin,s) && s!='EOF'){
	    int fact = 1;
	    for(int i = 0; i <s.size(); i++){
	    if(s[i]=='"'){
	        if(fact ==1){
	        cout<<"``";
	         fact = 0;
	        }
	        else{ 
	            cout <<"''";
	        fact = 1;
	        }
	    }
	    else cout << s[i];
	    
	}
	cout << "\n";
	}
	return 0;
}


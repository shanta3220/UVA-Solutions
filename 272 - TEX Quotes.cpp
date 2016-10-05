#include <iostream>
#include <string.h>
using namespace std;


int main() {
	string s;
	int fact = 1;
	while(getline(cin,s)){
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

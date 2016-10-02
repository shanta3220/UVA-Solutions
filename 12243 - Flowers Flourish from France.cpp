#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	int i = 1;
	
	while(getline(cin, s) && s != "*"){
	    int fact = 1;
	    s[0] = tolower(s[0]);
	    for(int i = 0; i < s.size()-1; i++){
	        if(s[i] == ' '){
	            if(tolower(s[i+1]) !=s [0])
	                fact = 0;
	            
	            
	        }
	        
	    }
	    if(fact == 1)
	        cout << "Y\n";
	    else cout << "N\n";
	
	}
	return 0;
}

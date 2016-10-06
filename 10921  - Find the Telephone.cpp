#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while(getline(cin, s)){
	    for(int i = 0; i < s.size(); i++){
	        if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C'){  
	            s.replace(i, 1, "2"); 
	        } 
	        else if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F'){
	            s.replace(i, 1, "3");
	        }
	        else if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I'){
	            s.replace(i, 1, "4");
	        }
	        else if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L'){
	            s.replace(i, 1, "5");
	        }
	        else if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O'){
	            s.replace(i, 1, "6");
	        }
	        else if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S'){
	            s.replace(i, 1, "7");
	        }
	        else if(s[i] == 'T' || s[i] == 'U' || s[i] == 'V' ){
	            s.replace(i, 1, "8");
	        }
	        else if(s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z'){
	            s.replace(i, 1, "9");
	        }
	        else continue;
	        
	    }
	    cout << s << "\n";
	}
	return 0;
}

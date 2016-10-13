#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;

int main() {
	int max, t;
	string s;
	cin>>t;
	cin.ignore();
	while(t--){
      getline(cin, s);
   	  map<char, int> letters;
	    max = 0;
	    for (int i = 0; i < s.size(); ++i){
	        if (s[i] >= 'A' && s[i] <= 'Z') 
	            s[i] += 32;
	        if (s[i] >= 'a' && s[i] <= 'z'){
    	    	     letters[s[i]]++;
    	    	if(max < letters[s[i]])
    	             max = letters[s[i]];
	        }
	    }
	    
    	map<char, int> :: const_iterator i;
    	for(i = letters.begin(); i != letters.end(); i++){
    	    if(i -> second == max) cout << i-> first;
    	}
    	
    	cout << "\n";
	
	}
	return 0;
}


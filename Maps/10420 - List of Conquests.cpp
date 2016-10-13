/* few notes to myself(ignore this thanks):
1.  why i used const_iterator instead of iterator: it doesn't allow to write or modify the members of a container. 
2. 	it can also be written like this ->	map<string, int>:: const_iterator i;
	for(i = beauty.begin(); i != beauty.end(); i++ )
	    cout << (*i).first <<" " << (*i).second <<"\n";
	    
3.  should check more vector iterator examples to get less confused.
4.  used "cin >> s" because it ignores " " and only gets the first string/character
    between two " ". example-> spain harleyy ->output: spain.
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n;
	string s, beautynames;
	cin >> n;
	map<string, int> beauty;
	while(n--){
	    cin >> s;
	    getline(cin, beautynames);
	    beauty[s] += 1;
	   
	}
	
	map<string, int> :: const_iterator i;
	for(i = beauty.begin(); i != beauty.end(); i++ )
	    cout << i -> first <<" " << i-> second <<"\n";
	return 0;
}

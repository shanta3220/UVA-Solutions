#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string s;
	while(getline(cin,s)){
	   for(int i = 0; i < s.size(); i++)
	    cout<<s[i];
	    cout<<"\n";
	   
	}
	return 0;
}

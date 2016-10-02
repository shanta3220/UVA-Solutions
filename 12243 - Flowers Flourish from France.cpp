#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int fact=1;
	while(getline(cin,s)&&s[0]!='*'){
	    for(int i=1; i<s.size();i++){
	        if(s[i]==' '){
	            if(s[i+1]==s[0]||s[i+1]-32==s[0]||s[i+1]+32==s[0])
	                fact=1;
	            else {
	                fact =0;
	                break;
	                
	            }
	        }
	    }
	    if(fact==1)
	        cout <<"Y\n";
	    else cout <<"N\n";
	}
	return 0;
}

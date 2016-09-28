#include<iostream>
#include<string>
using namespace std;

int main() {
	string b;
	double j;
	int n, i=1;
	
	cin>>n;
	while(n--){
	    cin>>b;
	    cin.ignore();
	    for (in)
	    if(b.length()>4){
         j=(b[0]-48)*0.5+(b[4]-48)*0.05;
         cout<<"Case "<<i++<<": "<<j<<"\n";
	    }
         else {
          j=(b[0]-48)*0.5;
         cout<<"Case "<<i++<<": "<<j<<"\n";
         }
    }
	return 0;
}

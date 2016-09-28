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
	    for (int k=1;k<b.length();k++){
	     if(b[0]>'0'&&b[0]<'11'||b[k]>'0'&&b[k]<'10'){
         j=(b[0]-48)*0.5+(b[k]-48)*0.05;
         }
         else {
          j=(b[0]-48)*0.5;
         }
         
         
	    }
	    cout<<"Case "<<i++<<": "<<b.length()<<"\n";
    }
	return 0;
}


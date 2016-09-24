#include <iostream>
using namespace std;

int main() {
	int t,i,z=0,j;
	string a;
	cin>>t;
	while(t--){
	cin>>a;
	if(a=="donate"){
        cin>>j;
        z+=j;
	}
	
	else cout<<z<<endl;
	}
	
	return 0;
}


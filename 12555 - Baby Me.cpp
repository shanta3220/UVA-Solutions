#include<iostream>
#include<string>
using namespace std;

int main() {
	int n,a,i=1;
	string b;
	cin >> n;
	while(n--){
	    cin >> a >> b;
	    double j= a * 0.5;
	    if(b.size() >= 4 && b[3] != ' '){
         
            double k = (b[3]-'0') * 0.05;
            j = j + k;
	    }
	    
	    cout << "Case " << i++ << ": " << j <<"\n";
         
    }
	return 0;
}



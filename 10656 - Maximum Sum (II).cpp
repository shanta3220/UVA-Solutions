#include <iostream>
using namespace std;

int main() {
	int t;
	while(cin >> t && t != 0){
	    cin.ignore();
	    int numb[t], num, n = 0, c = 0;
	    for(int i = 0; i < t; i++){
	        cin >> num;
	        cin.ignore();
	        if(num == 0){
	            continue;
	        }
	        else{
	            numb[n]=num;
	            n++;
	            c++;
	        }
	        
	    }
	    for(int i = 0; i < n; i++){
	        cout << numb[i];
	        if(i < n-1) cout <<" ";
	        
	    }
	    if(c==0) cout << "0";
	    cout << "\n";
	    
	}
	return 0;
}

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{    
    char a[100][100];
	int t, s, b[100], j = 1;
	cin >> t;
	while(t--){
	    int c=0;
	    for(int i = 0; i < 10; i++){
	    cin >> a[i] >> b[i];
	       if(b[i] >= c){
	           c=b[i];
	       }
	   
	    }
        cout << "Case #" << j++ << ":\n";
	    for(int i = 0; i < 10; i++){
	        if(b[i] == c)
	            cout << a[i] << "\n";
	       else continue;
	    }
	    
	}

	return 0;
}
